/*********************************************************************
** Author: Wyatt Griffith
** Date: 04/18/18
** Description: Function definitions for the Taxicab class.
*********************************************************************/
#include "Taxicab.hpp"
#include <cmath>

/*********************************************************************
**	Default constructor, sets all member variables to 0
*********************************************************************/
Taxicab::Taxicab(){
	XCoord = 0;
	YCoord = 0;
	distance = 0;
}

/*********************************************************************
**	Constructor, sets all member variables to inputs
*********************************************************************/
Taxicab::Taxicab(int x, int y){
	XCoord = x;
	YCoord = y;
	distance = 0;
}

/*********************************************************************
**	getXCoord, returns the XCoord member varaible
*********************************************************************/
int Taxicab::getXCoord(){
	return XCoord;
}

/*********************************************************************
**	getYCoord, returns the YCoord member varaible
*********************************************************************/
int Taxicab::getYCoord(){
	return YCoord;
}

/*********************************************************************
**	getDistanceTraveled, returns the distance member varaible
*********************************************************************/
int Taxicab::getDistanceTraveled(){
	return distance;
}

/*********************************************************************
**	moveX, moves the Taxicab in the x direction
**	       adds the input to the XCoord and distance variables
*********************************************************************/
void Taxicab::moveX(int x){
	XCoord += x;
	distance += std::abs(x);
}

/*********************************************************************
**      moveY, moves the Taxicab in the y direction
**             adds the input to the YCoord and distance variables
*********************************************************************/
void Taxicab::moveY(int y){
	YCoord += y;
	distance += std::abs(y);
}
