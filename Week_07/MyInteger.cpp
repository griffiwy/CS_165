/********************************************************************* 
** Author: Wyatt Griffith
** Date: 05/15/18
** Description: Implementation file for the functions in MyInteger
*********************************************************************/ 
#include "MyInteger.hpp"

/********************************************************************* 
** Constructor that takes an int as a pramater and dynamically 
** allocates memory for that int using pInteger. 
*********************************************************************/ 
MyInteger::MyInteger(int num){
	pInteger = new int;
	*pInteger = num;
}

/*********************************************************************
** Copy constructor that makes a seperate copy of the memory pInteger
** points to, and make pInteger in the new object point to it
*********************************************************************/
MyInteger::MyInteger(const MyInteger &obj){
	pInteger = new int;
	*pInteger = *obj.pInteger;
}

/*********************************************************************
** Destructor that deallocates memory when an object is destroyed
*********************************************************************/
MyInteger::~MyInteger(){
	delete pInteger;
}

/*********************************************************************
** Operator overloader that overloads the = operator such that each 
** object involved has a seperate copy of the memory that its
** pInteger points to and returns a reference to the object pointed
** to by the this pointer.
*********************************************************************/
MyInteger& MyInteger::operator=(const MyInteger &obj){
	pInteger = new int;
	*pInteger = *obj.pInteger;
	return *this;
}

/*********************************************************************
** setMyInt takes an int parameter and sets it to the value pointer
** to by pInteger
*********************************************************************/
void MyInteger::setMyInt(int num){
	*pInteger = num;
}

/*********************************************************************
** getMyInt returns the int that pInteger points to
*********************************************************************/
int MyInteger::getMyInt(){
	return *pInteger;
}

