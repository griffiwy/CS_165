/*********************************************************************
** Author: Wyatt Griffith
** Date: 05/02/18
** Description: This is a modified version of the binary search function
**		from chapter 9 of "Starting out with C++"
**		It takes two paramaters; a const vector of persons
**		and a string containing the name being searched for.
**		If the Person is found it will be returned,
**		otherwise it will return -1.
*********************************************************************/
#include "Person.hpp"
#include<vector>
#include<string>

int personSearch(const std::vector <Person> people, std::string name){
//Initialzing Variables
	int first = 0;
	int last = people.size()-1;
	int middle;
        int position = -1;
	bool found = false;

//Loop through the vector looking for name
	while (!found && first <= last){
		middle = (first + last)/2;

//If the name is found
		if (people[middle].getName() == name){
			found = true;
			position = middle;
		}

//If you need to look at lower values
		else if (people[middle].getName() > name){
			last = middle - 1;
		}

//If you need to look at higher values
		else{
			first = middle + 1;
		}
	}

//Return the value
	return position;
}
