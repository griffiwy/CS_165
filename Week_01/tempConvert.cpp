/********************************************************************* 
** Author: Wyatt Griffith
** Date: 04/02/18
** Description: This program takes a double for input and outputs one.
**		It asks the user to input a temperature in Celsius.
**		It converts it into Fahrenheit and output the answer.
*********************************************************************/ 

#include <iostream>
using namespace std;

int main(){
	double tempC, tempF;
	cout << "Please enter a Celsius temperature." << endl;
	cin >> tempC;
	tempF = (((9.0/5.0) * tempC) + 32);
	cout << "The equivalent Fahrenheit temperature is:" << endl << tempF << endl;
	return 0;
}
