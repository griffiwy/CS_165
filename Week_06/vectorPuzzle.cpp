#include<vector>
#include<algorithm>

bool vectorPuzzle(std::vector<int> vint, std::vector<int> prev, int token){
//Initialize Variables
	int left = token - vint.at(token);
	int right = token + vint.at(token);

//Add token to prev vector
	prev.push_back(token);

//Base Case: Game is Solveable
	if(vint.at(token) == 0){
		std::cout << "PASS" << std::endl;
		return true;
	}

//Check if we can move right
	if(right < vint.size()){

//Check if we've been here before
		if(std::find(prev.begin(), prev.end(), right) != prev.end()){

//Check if we can move left
//Recursive Case: Move Left
			if(left > -1){
				return vectorPuzzle(vint, prev, left);
			}

//Base Case: Game is NOT Solveable
			else{
				std::cout << "FAIL_1" << std::endl;
				return false;
			}
		}

//Recursive Case: Move Right
		else{
			return vectorPuzzle(vint, prev, right);
		}
	}

//Check if we can move left
	if(left > -1){

//Check if we've been here before
		if(std::find(prev.begin(), prev.end(), left) != prev.end()){

//Check if we can move right
//Recursive Case: Move Right
			if(right < vint.size()){
				return vectorPuzzle(vint, prev, right);
			}

//Base Case: Move Left
			else{
				std::cout << "FAIL_2" << std::endl;
				return false;
			}
		}

//Recursive Case: Move Left
		else{
			return vectorPuzzle(vint, prev, left);
		}
	}


}

//Helper Function
bool vectorPuzzle(std::vector<int> vint){
	std::vector<int> prev;
	return vectorPuzzle(vint, prev, 0);
}

