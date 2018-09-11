/********************************************************************* 
** Author: Wyatt Griffith
** Date Created: 04/25/18
** Date Revised: 05/02/18
** Description: Declaration file for the Person class.
*********************************************************************/
#include<string>

#ifndef PERSON_HPP
#define PERSON_HPP

class Person{

//Member Variables
	private:
		std::string name;
		double age;

//Member Functions
	public:
		Person(std::string, double);
		std::string getName() const;
		double getAge();

};
#endif
