/*********************************************************************
** Author: Wyatt Griffith
** Date: 04/18/18
** Description: Function definitions for the Player class.
*********************************************************************/
#include "Player.hpp"

/*********************************************************************
**	Default constructor, sets member variables to "" and -100
*********************************************************************/
Player::Player(){
	name = "";
	points = -100;
	rebounds = -100;
	assists = -100;
}

/*********************************************************************
**	Constructor, sets member variables to inputs
*********************************************************************/
Player::Player(std::string nm, int pt, int rb, int as){
        name = nm;
        points = pt;
        rebounds = rb;
        assists = as;
}

/*********************************************************************
**	getName, returns name member variable
*********************************************************************/
std::string Player::getName(){
	return name;
}

/*********************************************************************
**	setPoints, sets points member variable to input
*********************************************************************/
void Player::setPoints(int pt){
	points = pt;
}

/*********************************************************************
**      getPoints, returns points member variable
*********************************************************************/
int Player::getPoints(){
	return points;
}

/*********************************************************************
**      setRebounds, sets rebounds member variable to input
*********************************************************************/
void Player::setRebounds(int rb){
	rebounds = rb;
}

/*********************************************************************
**      getRebounds, returns rebounds member variable
*********************************************************************/
int Player::getRebounds(){
	return rebounds;
}

/*********************************************************************
**      setAssists, sets assists member variable to input
*********************************************************************/
void Player::setAssists(int as){
	assists = as;
}

/*********************************************************************
**      getAssists, returns assists member variable
*********************************************************************/
int Player::getAssists(){
	return assists;
}

/*********************************************************************
**	hasMorePointsThan,  returns true if the Player executing
**			    has more points than the Player parrameter
**			    Otherwise it should return false.
*********************************************************************/
bool Player::hasMorePointsThan(Player other){
	if(points > other.getPoints()){
		return true;
	}

	else if(points <= other.getPoints()){
		return false;
	}
}
