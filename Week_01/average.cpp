/***************************************************************************
** Author: Wyatt Griffith
** Date: 04/02/18
** Description: This program takes 5 doubles and outputs one double.
**		It asks the user to input 5 numbers and outputs the average.
***************************************************************************/ 

#include <iostream>
using namespace std;

int main(){
	double one, two, three, four, five, sum, avg;
	cout << "Please enter five numbers." << endl;
	cin >> one >> two >> three >> four >> five;
	sum = one + two + three + four + five;
	avg = sum/5;
	cout << "The average of those numbers is:" << endl << avg << endl;
	return 0;
}
