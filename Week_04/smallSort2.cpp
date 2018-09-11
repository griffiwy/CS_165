/********************************************************************* 
** Author: Wyatt Griffith
** Date: 04/25/18
** Description: A void function that takes three paramaters
**		It takes three addresses of ints and sorts them
**		They are sorted in ascending order using pointers
*********************************************************************/

void smallSort2(int *one, int *two, int *three){
//Initialize member variables
	int first, second, third, hold;
	first = *one;
	second = *two;
	third = *three;

//Swap first and second
	while(first > second){
		hold = first;
		first = second;
		second = hold;
	}

//Swap second and third
	while(second > third){
		hold = second;
		second = third;
		third = hold;
	}

//Swap first and second again
        while(first > second){
                hold = first;
                first = second;
                second = hold;
        }

//Swap second and third again
        while(second > third){
                hold = second;
                second = third;
                third = hold;
        }


//Set the pointers
	*one = first;
	*two = second;
	*three = third;
}

