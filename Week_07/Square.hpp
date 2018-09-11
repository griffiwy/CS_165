/********************************************************************* 
** Author: Wyatt Griffith
** Date: 05/15/18
** Description: This is a class called Square that inherits from
**		Rectangle which inherits from Shape. It takes one
**		double and passes it as both parameters to the base
**		constructor. It overrides the virtual setLength() and
**		setWidth() of the base class so it remains a square.
*********************************************************************/ 
#ifndef SQUARE_HPP
#define SQUARE_HPP

class Square : public Rectangle{
	private:

	public:
		Square(double);			//Constructor
		void setLength(double);		//OVERRIDDEN Function
		void setWidth(double);		//OVERRIDDEN Function
};
#endif
