/*********************************************************************
** Author: Wyatt Griffith
** Date: 04/18/18
** Description: Decclaration file for the Taxicab class.
*********************************************************************/
#ifndef TAXICAB_HPP
#define TAXICAB_HPP

class Taxicab{

//Member variables
	private:
		int XCoord;
		int YCoord;
		int distance;

//Member functions
	public:
		Taxicab();
		Taxicab(int, int);
		int getXCoord();
		int getYCoord();
		int getDistanceTraveled();
		void moveX(int);
		void moveY(int);
};
#endif
