/*********************************************************************
** Author: Wyatt Griffith
** Date: 05/09/18
** Description: This is a recursive function that takes 2 parameters.
**		It takes an array of ints and the size of the array.
**		It returns true if the array is strictly decreasing.
**		It returns false otherwise.
*********************************************************************/

bool isDecreasing(int irray[], int size, bool isDec){
//Initialize Variables
	int L = irray[size - 2];
	int R = irray[size - 1];

///Termination Condition
	if (size < 2){
		return isDec;
	}

//Recursive step
	else{
		if ((L - R) <= 0){
			isDec = false;
		}
		return isDecreasing(irray, size-1, isDec);
	}
}

//Helper function
bool isDecreasing(int irray[], int size){
	return isDecreasing(irray, size, true);
}
