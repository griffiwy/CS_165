/********************************************************************* 
** Author: Wyatt Griffith
** Date: 05/15/18
** Description: Implementation file for the Circle class.
*********************************************************************/ 
#include "Shape.hpp"
#include "Circle.hpp"

/********************************************************************* 
** This constructor takes a double and uses setRadius to pass it
*********************************************************************/ 
Circle::Circle(double rad){
	setRadius(rad);
}

/*********************************************************************
** This function takes a doubles and passes it to the radius
*********************************************************************/
void Circle::setRadius(double rad){
	radius = rad;
}

/*********************************************************************
** This function overrides the area() Shape method for circles
** It calculates the area of a circle and returns it as a double
*********************************************************************/
double Circle::area(){
	double area = (PI * radius * radius);
	return area;
}

/**********************************************************************
** This function overrides the perimeter() Shape method for circles
** It calculate the perimeter of a circle and returns it as a double
**********************************************************************/
double Circle::perimeter(){
	double perim = (2 * PI * radius);
	return perim;
}

