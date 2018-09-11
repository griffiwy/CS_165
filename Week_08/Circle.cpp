/*********************************************************************
** Author: Wyatt Griffith
** Date: 05/23/18
** Description: This is the implementation file for the Circle class
**	declared in Circle.hpp. It contains definitions for the
**	functions in that Circle class.
*********************************************************************/
#include "Circle.hpp"
#include<iostream>

//Definining and initializing static variable maxRadius
double Circle::maxRadius = 10.0;

/*********************************************************************
** Default Constructor: Initializes radius to 1.0 
*********************************************************************/
Circle::Circle(){
	radius = 1.0;
}

/*********************************************************************** 
** Constructor: Initializes radius to inputted value, if value<maxRadius
**	If the value > maxRadius, an exception is thrown.
***********************************************************************/ 
Circle::Circle(double rad){
//If the Circle can't be created, throw exception
	if(rad > maxRadius)
		throw IllegalRadius(rad);
	
//If the Circle can be created
	else{
		radius = rad;
		std::cout << "The Circle object was successfully created." << std::endl;
		std::cout << "The area of the circle is " << calcArea() << "." << std::endl;
	}
}

/*********************************************************************
** calcArea: Returns the area of a circle (Pi*r^2)
*********************************************************************/
double Circle::calcArea(){
	double area = (PI*radius*radius);
	return area;
}

/*********************************************************************
** setMaxRadius: Static method that initializes maxRadius to a value
*********************************************************************/
void Circle::setMaxRadius(double mRad){
	maxRadius = mRad;
}


/*********************************************************************
** Exception Constructor: Sets basRadius to input
*********************************************************************/
Circle::IllegalRadius::IllegalRadius(double bad){
	badRadius = bad;
}
