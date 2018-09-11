/*********************************************************************
** Author: Wyatt Griffith
** Date: 06/10/18
** Description: This is the header file for the Ship class. There are
**	3 variables, 4 methods, and a constructor. The variables
**	represent the name, length, and damage taken by the ship.
**	The constructor initializes a ships name and length to 
**	input parameters and the damage to 0. It has methods for
**	returning the name, length, and damage variables. It has a
**	method for updating the damage variable when a ship is hit. 
*********************************************************************/
#include<string>

#ifndef SHIP_HPP
#define SHIP_HPP
class Ship{
//Member Variables
	private:
		std::string name;	//The name of the ship
		int length;		//The length of the ship
		int damage;		//The damage taken by the ship

//Member Functions
	public:
		Ship(std::string, int);	//Constructor
		std::string getName();	//Returns the name variable
		int getLength();	//Returns the length variable
		int getDamage();	//Returns the damage variable
		void takeHit();		//Updates damage variable
};
#endif
