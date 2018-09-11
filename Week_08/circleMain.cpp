/*********************************************************************
** Author: Wyatt Griffith
** Date: 05/23/18
** Description: This is the main file for implementing the Circle class
**	It provides an interface for user input and contians the try
**	and catch blocks for the IllegalRadius exception class.
*********************************************************************/
#include "Circle.hpp"
#include<iostream>

int main(){
//Initialize variables
	double rad = 0;
	double mRad = 0;

//Ask for and reccieve user input
	std::cout << "Enter the maxRadius for Circles." << std::endl;
	std::cin >> mRad;
	std::cout << "Enter the radius for a new Circle object." << std::endl;
	std::cin >> rad;

//Set the maxRadius  to input
	Circle::setMaxRadius(mRad);	

//Exception handeling
//Try Block: Passes to the constructor to see if radius < maxRadius
	try{
		Circle circ(rad);
	}

//Catch Block: If the radius exceeds maxRadius
	catch(Circle::IllegalRadius){
		std::cout << "The Circle object could not be created." << std::endl;
		std::cout << "A radius of " << rad << " exceeds the maximum allowed radius." << std::endl;
	}
	return 0;
}
