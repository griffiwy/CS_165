/*********************************************************************
** Author: Wyatt Griffith
** Date: 06/10/18
** Description: This file has the function definitions for the BBoard
**	class. The default constructor initializes the arrays ships
**	and attacks. getAttacksArrayElement and getShipsArrayElement
**	each return the element in their array at the location
**	inputted. getNumShips remaining returns the number of unSunk
**	ships. placeShip places a ship on the board. attack makes an
**	attack at the inputted location. allShipsSunk returns true
**	if all the ships are sunk and false otherwise.
*********************************************************************/
#include "Ship.hpp"
#include "BBoard.hpp"
#include <iostream>

/*********************************************************************
** Default Constructor: Initializes all values in attacks to false
**	and ships to nullptr.
*********************************************************************/
BBoard::BBoard(){
	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 10; j++){
			attacks[i][j] = false;
			ships[i][j] = nullptr;
		}
	}
}

/*********************************************************************
** getAttacksArrayElement: Returns element at row, col in attacks
*********************************************************************/
bool BBoard::getAttacksArrayElement(int row, int col){
	return attacks[row][col];
}

/*********************************************************************
** getShipsArrayElement: Returns element ar row, col in ships
*********************************************************************/
Ship* BBoard::getShipsArrayElement(int row, int col){
	return ships[row][col];
}

/*********************************************************************
** getNumShipsRemaining: Returns how many ships remain unSunk
*********************************************************************/
int BBoard::getNumShipsRemaining(){
	return unSunk;
}

/*********************************************************************
** placeShip: Places a boat starting at row, col facing the direction
**	specified by orient. If possible return true, false otherwise
*********************************************************************/
bool BBoard::placeShip(Ship* boat, int row, int col, char orient){
	int size = boat->getLength();
	if(orient == 'C'){
		for(int i = 0; i < size; i++){
			if(ships[row+i][col]!= nullptr)
				return false;
			else
				ships[row+i][col] = boat;
		}
		return true;
	}

	else if(orient == 'R'){
		for(int i = 0; i < size; i++){
			if(ships[row][col+i] != nullptr)
				return false;
			else
				ships[row][col+i] = boat;
		}
		return false;
	}
}

/*********************************************************************
** attack: Fires attack at row, col, if it hits a ship; record the
**	the hit in attacks, call takeHit (if this square hasn't been
**	hit), output a message if the ship is sunk, and return true.
**	If it is a miss, record the hit in attacks and return false.
*********************************************************************/
bool BBoard::attack(int row, int col){
	bool beenHit = attacks[row][col];
	attacks[row][col] = true;
	Ship* myShip = ships[row][col];
	if(myShip == nullptr){
		return false;
	}

	else{
		if(!beenHit)
			myShip->takeHit();
		if(myShip->getDamage() == myShip->getLength()){
			std::cout << "They sank " << myShip->getName() << "!\n";
			unSunk--;
		}
		return true;
	}
}

/*********************************************************************
** allShipsSunk: Returns true if all ships are sunk
*********************************************************************/
bool BBoard::allShipsSunk(){
	if(unSunk == 0)
		return true;
	else
		return false;
}

/*********************************************************************
** print: Prints the boards
*********************************************************************/
void BBoard::print(){
	char chips = ' ';
	std::cout << "Game Board" << std::endl;
	for(int i = 0; i < 10; i++){
		std::cout << std::endl;
		for(int j = 0; j < 10; j++){
			if(getShipsArrayElement(i, j)!=nullptr)
				chips = 'X';
			std::cout << " | " << chips << " | ";
			chips = ' ';
		}
		std::cout << std::endl;
	}

	std::cout << "Hit Board" << std::endl;
	for(int i = 0; i < 10; i++){
		std::cout << std::endl;
		for(int j = 0; j < 10; j++){
			std::cout << " | " << getAttacksArrayElement(i, j) << " | "; 
		}
		std::cout << std::endl;
	}
}
