/********************************************************************* 
** Author: Wyatt Griffith
** Date: 05/09/18
** Description: This is a recursive function that takes 2 parameters.
**		It takes an array of ints and the size of the array.
**		It finds the max value in the array and returns it.
*********************************************************************/ 

int arrayMax(int irray[], int size, int max){

//Termination condition
	if (size < 1){
		return max;
	}

//Recursive step
	else{
		if (irray[size-1] > max){
			max = irray[size-1];
		}
		return arrayMax(irray, size-1, max);
	}
}

//Helper Function
int arrayMax(int irray[], int size){
	return arrayMax(irray, size, irray[0]);
}
