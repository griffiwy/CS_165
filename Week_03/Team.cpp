/*********************************************************************
** Author: Wyatt Griffith
** Date: 04/18/18
** Description: Function definitions for the Team class.
*********************************************************************/
#include "Player.hpp"
#include "Team.hpp"

/*********************************************************************
**	Constructor, sets member variables to inputs
*********************************************************************/
Team::Team(Player pg, Player sg, Player sf, Player pf, Player c){
	pointGuard = pg;
	shootingGuard = sg;
	smallForward = sf;
	powerForward = pf;
	center = c;
}

/*********************************************************************
**	setPointGuard, sets pointGuard member variable to input
*********************************************************************/
void Team::setPointGuard(Player pg){
	pointGuard = pg;
}

/*********************************************************************
**	getPointGuard, returns pointGuard member variable
*********************************************************************/
Player Team::getPointGuard(){
	return pointGuard;
}

/*********************************************************************
**      setShootingGuard, sets shootingGuard member variable to input
*********************************************************************/
void Team::setShootingGuard(Player sg){
	shootingGuard = sg;
}

/*********************************************************************
**      getShootingGuard, returns shootingGuard member variable
*********************************************************************/
Player Team::getShootingGuard(){
	return shootingGuard;
}

/*********************************************************************
**      setSmallForward, sets smallForward member variable to input
*********************************************************************/
void Team::setSmallForward(Player sf){
	smallForward = sf;
}

/*********************************************************************
**      getSmallForward, returns smallForward member variable
*********************************************************************/
Player Team::getSmallForward(){
	return smallForward;
}

/*********************************************************************
**      setPowerForward, sets powerForward member variable to input
*********************************************************************/
void Team::setPowerForward(Player pf){
	powerForward = pf;
}

/*********************************************************************
**      getPowerForward, returns powerForward member variable
*********************************************************************/
Player Team::getPowerForward(){
	return powerForward;
}

/*********************************************************************
**      setCenter, sets center member variable to input
*********************************************************************/
void Team::setCenter(Player c){
	center = c;
}

/*********************************************************************
**      getCenter, returns center member variable
*********************************************************************/
Player Team::getCenter(){
	return center;
}

/*********************************************************************
**      getPointGuard, sums the points from each player in the tPoints
**		       member variable, then  returns tPoints
*********************************************************************/
int Team::totalPoints(){
	tPoints = 0;
	tPoints += pointGuard.getPoints();
	tPoints += shootingGuard.getPoints();
	tPoints += smallForward.getPoints();
	tPoints += powerForward.getPoints();
	tPoints += center.getPoints();
	return tPoints;
}
