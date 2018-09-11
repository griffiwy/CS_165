/********************************************************************* 
** Author: Wyatt Griffith
** Date: 04/25/18
** Description: This is a void function that takes two parameters
**		It takes a reference to a pointer to a dynamically
**		allocated array of ints and the size of that array
**		It replaces that array with one twice as long that is
**		the original values followed by those values plus one
*********************************************************************/

void transformArray(int*& oldArray, int size){
//Create new array that is twice as long
	int* newArray = new int[2*size];

//Add the contents of the old array to the new array
	for(int i=0; i<=(size-1); i++){
		newArray[i] = oldArray[i];
	}

//Take the contents from the old array,
//add one to each number and add it to the new array
	for(int i=0; i<=(size-1); i++){
		int num = oldArray[i];
		num++;
		newArray[i+size] = num;
	}
//Delete the new array
        delete []oldArray;

//Swap the pointers
	oldArray = newArray;


}

