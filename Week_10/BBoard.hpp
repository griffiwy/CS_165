/*********************************************************************
** Author: Wyatt Griffith
** Date: 06/10/18
** Description:
*********************************************************************/
#ifndef BBOARD_HPP
#define BBOARD_HPP
class BBoard{
//Member Variables
	private:
		bool attacks [10][10];	//Array for which squares have been hit
		Ship* ships [10][10];	//Array for pointers to ships
		int unSunk;		//How many ships haven't been sunk

//Member Functions
	public:
		BBoard();				//Default Constructor
		bool getAttacksArrayElement(int, int);	//Returns value at location in attacks
		Ship* getShipsArrayElement(int, int);	//Returns value at location in ships
		int getNumShipsRemaining();		//Returns unSunk
		bool placeShip(Ship*, int, int, char);	//Places a ship
		bool attack(int, int);			//Makes an attack at the location
		bool allShipsSunk();			//Returns true if all ships are sunk
		void print();				//Prints the board
};
#endif
