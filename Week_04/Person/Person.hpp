/********************************************************************* 
** Author: Wyatt Griffith
** Date: 04/25/18
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
		std::string getName();
		double getAge();

};
#endif
