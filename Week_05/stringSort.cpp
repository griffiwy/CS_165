/*************************************************************************
** Author: Wyatt Griffith
** Date: 05/02/18
** Description: This is a modified version of the selection sort function,
**		found in chapter 9 of "Starting out With C++"
**		It takes an array of strings and the size of that array.
**		It sorts the array and returns nothing.
*************************************************************************/
#include<string>
#include<locale>


bool caseCompare(std::string one, std::string two){
//Initialize Variables
	char a, b;
	std::locale loc;

//Loop through first string
	for( int i=0; i < one.length(); i++){
		a = std::tolower(one[i],loc);
       	        b = std::tolower(two[i],loc);

//If the first char is 'bigger'
		if(a > b){
			return false;
		}

//If the second char is 'bigger' 
		else if(a < b){
			return true;
		}

//If the chars are equal
		else if( a = b){
			continue;
		}

        }
}


void stringSort(std::string sarray[], int size){
//Initialize variables
	int start, mIndex;
	std::string  minVal;

//Loop through the array to compare minVal
	for(start=0; start<(size-1); start++){
		mIndex = start;
		minVal = sarray[start];

//Looping through the array to compare each element to minVal
		for(int i=start+1; i<size; i++){

//Move minVal if it is in the wrong place

			if(caseCompare(sarray[i], minVal)){
				minVal = sarray[i];
				mIndex = i;
			}
		}
		sarray[mIndex] = sarray[start];
		sarray[start] = minVal;
	}
}
