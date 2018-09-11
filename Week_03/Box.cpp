/*********************************************************************
** Author: Wyatt Griffith
** Date: 04/18/18
** Description: Function definitions for the Box class.
*********************************************************************/
#include "Box.hpp"

/*********************************************************************
**	Default constructor, sets all member variables to 1
*********************************************************************/
Box::Box(){
        setHeight(1);
        setWidth(1);
        setLength(1);
}

/*********************************************************************
**	Constructor, sets all member variables to input values
*********************************************************************/
Box::Box(double h, double w, double l){
	setHeight(h);
	setWidth(w);
	setLength(l);
}

/*********************************************************************
**	setHeight, sets the height member variable to input value
*********************************************************************/
void Box::setHeight(double h){
	height = h;
}

/*********************************************************************
**	setWidth, sets the width member variable to input value
*********************************************************************/
void Box::setWidth(double w){
	width = w;
}

/*********************************************************************
**	setLength, sets the length member variable to input value
*********************************************************************/
void Box::setLength(double l){
	length = l;
}

/*********************************************************************
**	calcVolume, calculates the volume and returns the result
*********************************************************************/
double Box::calcVolume(){
	double vol = height*width*length;
	return vol;
}

/*********************************************************************
**	calcSurfaceArea, calculates surface area, returns result
*********************************************************************/
double Box::calcSurfaceArea(){
	double surf = 2*(height*width + width*length + height*length);
	return surf;
}

