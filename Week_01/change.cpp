/************************************************************************
** Author: Wyatt Griffith
** Date: 04/02/18
** Description: This program takes an int input and outputs 4 ints.
**		It asks the user to input a number of cents.
**		It outputs how many of each type of coin that represents.
************************************************************************/ 

#include <iostream>
using namespace std;

int main(){
	int cents, quart, dime, nick, pen;
	cout << "Please enter an amount in cents less than a dollar." << endl;
	cin >> 	cents;
	quart = cents/25;
	cents = cents%25;
	dime = cents/10;
	cents = cents%10;
	nick = cents/5;
	cents = cents%5;
	pen = cents;
	cout << "Your change will be:" << endl;
	cout << "Q: " << quart << endl;
        cout << "D: " << dime << endl;
        cout << "N: " << nick << endl;
        cout << "P: " << pen << endl;
	return 0;
}
