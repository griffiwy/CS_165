/********************************************************************* 
** Author: Wyatt Griffith
** Date: 05/15/18
** Description: This is an abstract class called Shape. It has pure
**		virtual methods called area and perimeter.
*********************************************************************/ 
#ifndef SHAPE_HPP
#define SHAPE_HPP

class Shape{
	private:

//Pure Virtual Methods
	public:
		virtual double area() = 0;
		virtual double perimeter() = 0;
};
#endif
