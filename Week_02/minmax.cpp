/***************************************************************************
** Author: Wyatt Griffith
** Date: 04/07/18
** Description: This program asks the user how many integers they would like 
**              to input, then it asks the user to input that many integers. 
**		It outputs the minimum and maximum integer of those entered.
***************************************************************************/

#include <iostream>
using namespace std;

int main(){
	int num, numInt, min, max;
	cout << "How many integers would you like to enter?" << endl;
	cin >> numInt; 
	cout << "Please enter " << numInt << " integers." << endl;

	for(int n=1; n<=numInt; n++){
		cin >> num;
		if( n == 1){
			min = max = num;
		}
		if(num <= min){
			min = num;
		}
		else if(num >= max){
			max = num;
		}
	}
	cout << "min: " << min << endl << "max: " << max << endl;
	return 0;
}
