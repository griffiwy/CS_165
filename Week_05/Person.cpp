/********************************************************************* 
** Author: Wyatt Griffith
** Date Created: 04/25/18
** Date Revised: 05/02/18
** Description: Function definitions for the Person class.
*********************************************************************/
#include "Person.hpp"

/*********************************************************************
** Constructor
*********************************************************************/
Person::Person(std::string nm, double ag){
	name = nm;
	age = ag;
}

/*********************************************************************
** getName
*********************************************************************/
std::string Person::getName() const{
	return name;
}

/*********************************************************************
** getAge
*********************************************************************/
double Person::getAge(){
	return age;
}