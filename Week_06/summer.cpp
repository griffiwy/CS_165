/**********************************************************************
** Author: Wyatt Griffith
** Date: 05/09/18
** Description: A recursive function that takes two parameters.
**		It takes an array of doubles and the size of the array.
**		It sums the values of the array and returns that value.
**********************************************************************/

double summer( double darray[], int size){
//Termination Condition
	if (size < 1){
		return 0;
	}

//Recursive Step
	else{
		return darray[size-1] + summer(darray, size-1);
	}
}
