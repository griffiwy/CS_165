/********************************************************************* 
** Author: Wyatt Griffith
** Date: 05/15/18
** Description: This si the implementation file for the Square class.
*********************************************************************/ 
#include "Shape.hpp"
#include "Rectangle.hpp"
#include "Square.hpp"

/**********************************************************************
** This constructor passes one parameter into both fields for Rectangle
**********************************************************************/
Square::Square(double len) : Rectangle(len, len){

}

/**********************************************************************
** This function overrides the setLength() Rectangle method for squares
** It sets both fields (length and width) at the same time
**********************************************************************/
void Square::setLength(double len){
	length = len;
	width = len;
}

/**********************************************************************
** This function overrides the setWidth() Rectangle method for squares
** It sets both fields (length and width) at the same time
**********************************************************************/
void Square::setWidth(double len){
	width = len;
	length = len;
}
