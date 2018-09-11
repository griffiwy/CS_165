/*********************************************************************
** Author: Wyatt Griffith
** Date: 05/02/18
** Description: This is a modified version of the bubble sort function
**		from chapter 9 of "Starting out with C++"
**		It sorts an array of boxes from greatest to least volume
**		It takes two paramaters; an array of boxes and the size
**		of the array, it returns nothing.
*********************************************************************/
#include"Box.hpp"

void boxSort(Box barry[], int size){
//Initialize the variables
	Box temp;
	bool swapped;

//Keep doing this if a swap was made
	do{

//Reset swap to false
		swapped = false;

//Loop through the array
		for (int i=0; i<(size-1); i++){

//If there are boxes out of order, swap them
			if(barry[i].calcVolume() < barry[i+1].calcVolume()){
				temp = barry[i];
				barry[i] = barry[i+1];
				barry[i+1] = temp;
				swapped = true;
			}
		}

	} while (swapped);
}

