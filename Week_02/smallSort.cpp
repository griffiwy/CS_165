/********************************************************************* 
** Author: Wyatt Griffith 
** Date: 04/07/18
** Description: This function takes in 3 integer parameters, 
**              sorts them by size, and returns nothing.
*********************************************************************/ 
#include <iostream>
using namespace std;

void smallSort (int &a, int &b, int &c){
	int placeHold;
	while ( b < a){
		placeHold = a;
		a = b;
		b = placeHold;
	}
	while ( c < b){
		placeHold = b;
		b = c;
		c = placeHold;
	}
	while ( b > c){
		placeHold = c;
		c = b;
		b = placeHold;
	}
	while ( a > b){
		placeHold = b;
		b = a;
		a = placeHold;
	}
	return;
}

