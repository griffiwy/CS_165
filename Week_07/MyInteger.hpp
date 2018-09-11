/********************************************************************* 
** Author: Wyatt Griffith
** Date: 05/15/18
** Description: This is a class called MyInteger. It has one member
**		variable which is a pointer to int pInteger. It has
**		a constructor that takes an int parameter and a copy
**		constructor that makes a copy of pInteger. It has a 
**		destructor to deallocate memory. It has an operator
**		overloader for the = operator. It has 2 methods
**		called getMyInt and setMyInt.
*********************************************************************/ 
#ifndef MYINTEGER_HPP
#define MYINTEGER_HPP

class MyInteger{
	private:
		int* pInteger;				//Member Variable

	public:
		MyInteger(int);				//Constructor
		MyInteger(const MyInteger&);		//Copy Constructor
		~MyInteger();				//Destructor
		MyInteger& operator=(const MyInteger&);	//Operator Overload
		void setMyInt(int);			//Set Member Function
		int getMyInt();				//Get Member Function
};
#endif
