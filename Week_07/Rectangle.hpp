/********************************************************************* 
** Author: Wyatt Griffith
** Date: 05/15/18
** Description: This is a class called Rectangle that inherits from
**		Shape. It has double fields for length and with and a
**		virtual set method for both fields. It overrides the
**		Shape virtual methods area() and perimeter() for 
**		rectangled. It has a constructor to pass double 
**		paramters to both fields.
*********************************************************************/ 
#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

class Rectangle : public Shape{

//Friend Class Declartion
	friend class Square;

//Member variables
	private:
		double length;
		double width;

	public:
		Rectangle(double, double);		//Constructor
		virtual void setLength(double);		//Virtual Function
		virtual void setWidth(double);		//Virtual Function
		double area();				//OVERRIDDEN Function
		double perimeter();			//OVERRIDDEN Function
};
#endif
