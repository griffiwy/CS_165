/********************************************************************* 
** Author: Wyatt Griffith
** Date: 04/25/18
** Description: This function takes two parameters and returns an int
**		It takes an array of ints and the size of the array
**		It calculates the median int and returns the result
*********************************************************************/
#include<algorithm>

double findMedian(int intArray[], int size){
//Initialze member variables
	double median, lower, upper;

//Sort the array
	std::sort(intArray, intArray + size);

//Median for an odd sized array
	if(size%2 != 0){
		median = intArray[(size/2)];
	}

//Median for an even sized array
	else if(size%2 == 0){
		upper = intArray[(size/2)];
		lower = intArray[(size/2) - 1];
		median = ((lower + upper)/2.0);
	}
	return median;
}
