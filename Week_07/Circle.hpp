/********************************************************************* 
** Author: Wyatt Griffith
** Date: 05/15/18
** Description: This is a class called Circle that inherits from Shape.
**		It has a double field for the radius and a set method
**		for the radius. It overrides the Shape virtual methods
**		area() and perimeter() to apply to a circle. It has a
**		constructor that passes a double to setRadius.
*********************************************************************/ 
#ifndef CIRCLE_HPP
#define CIRCLE_HPP

class Circle : public Shape{

//Member Variables
	private:
		double radius;
		const static double PI = 3.14159;

	public:
		Circle(double);			//Constructor
		void setRadius(double);		//Member function
		double area();			//OVERRIDDEN function
		double perimeter();		//OVERRIDDEN function
};
#endif

