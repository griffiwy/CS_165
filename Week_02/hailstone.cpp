/********************************************************************* 
** Author: Wyatt Griffith
** Date: 04/07/18
** Description: This function inputs a positive integer, begins a hailstone sequence, 
**              and returns how many steps it will take to get to the number 1. A
**              hailstone sequence will take an even number and divide it by two, it
**              will also take an odd number, multiply it by three and add one to it.
*********************************************************************/ 
#include <iostream>
using namespace std;

int hailstone(int num){
	int steps = 0;
	while (num !=1){
		if (num%2 == 0){
			num = num/2;
			steps++;
		}
		else{
			num = ((num*3) + 1);
			steps++;
		}
	}
	return (steps);
}

