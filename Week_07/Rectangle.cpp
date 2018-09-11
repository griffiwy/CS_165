/********************************************************************* 
** Author: Wyatt Griffith
** Date: 05/15/18
** Description: The implementation file for the Rectangle class.
*********************************************************************/ 
#include "Shape.hpp"
#include "Rectangle.hpp"

/*********************************************************************
** This constructor takes and passes two doubles for length and width
*********************************************************************/
Rectangle::Rectangle(double len, double wide){
	setLength(len);
	setWidth(wide);
}

/*********************************************************************
** The setLength function sets the length member variable
*********************************************************************/
void Rectangle::setLength(double len){
	length = len;
}

/*********************************************************************
** The setWidth function sets the width member variable
*********************************************************************/
void Rectangle::setWidth(double wide){
	width = wide;
}

/*********************************************************************
** This function overides the area() Shape method for rectangles
** It calculates and returns the area of a rectangle as a double
*********************************************************************/
double Rectangle::area(){
	double area = (length * width);
	return area;
}

/*********************************************************************
** This function overides the perimeter() Shape method for rectangles
** It calculates and returns the perimeter of a rectangle as a double
*********************************************************************/
double Rectangle::perimeter(){
	double perim = (2 * length) + (2 * width);
	return perim;
}

