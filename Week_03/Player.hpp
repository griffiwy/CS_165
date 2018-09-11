/*********************************************************************
** Author: Wyatt Griffith
** Date: 04/18/18
** Description: Declaration file for the Player class.
*********************************************************************/
#ifndef PLAYER_HPP
#define PLAYER_HPP
#include<string>

class Player{

//Member variables
	private:
		std::string name;
		int points;
		int rebounds;
		int assists;

//Member functions
	public:
		Player();
		Player(std::string, int, int, int);
		std::string getName();
		void setPoints(int);
		int getPoints();
		void setRebounds(int);
		int getRebounds();
		void setAssists(int);
		int getAssists();
		bool hasMorePointsThan(Player);
};
#endif
