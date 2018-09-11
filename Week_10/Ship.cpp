/*********************************************************************
** Author: Wyatt Griffith
** Date: 06/10/18
** Description: This file has the function defintions for the Ship
**	class. The constructor initializes the variables for the Ship
**	class. The getName, getLength, and getDamage methods each
**	return their respective variables. The takeHit method 
**	increments the ships damage by 1 when it's been hit.
*********************************************************************/
#include <string>
#include "Ship.hpp"

/*********************************************************************
** Constructor: Initializes name and length to user input, damage to 0
*********************************************************************/
Ship::Ship(std::string nam, int len){
	name = nam;
	length = len;
	damage = 0;
}

/*********************************************************************
** getName(): Returns the name variable
*********************************************************************/
std::string Ship::getName(){
	return name;
}

/*********************************************************************
** getLength(): Returns the length variable
*********************************************************************/
int Ship::getLength(){
	return length;
}

/*********************************************************************
** getDamage(): Returns the damage variable
*********************************************************************/
int Ship::getDamage(){
	return damage;
}

/*********************************************************************
** takeHit(): Increments the ships damage by 1 when it has been hit
*********************************************************************/
void Ship::takeHit(){
	damage +=1;
}

