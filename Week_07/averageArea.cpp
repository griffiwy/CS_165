/********************************************************************* 
** Author: Wyatt Griffith
** Date: 05/15/18
** Description: This is a function called averageArea that takes a
**		vector of Shape-pointers and returns the average
**		area area of the shapes in that vector.
*********************************************************************/ 
#include "Shape.hpp"
#include "Circle.hpp"
#include "Rectangle.hpp"
#include "Square.hpp"
#include <vector>

double averageArea(std::vector <Shape*> vect){
//Initialize variables
	double avg = 0;

//Sum up all of the areas
	for(int i = 0; i < vect.size(); i++){
		avg += vect.at(i)->area();
	}

//Divide by the number of shapes
	avg /= vect.size();
	return avg;
}
