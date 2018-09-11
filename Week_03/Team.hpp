/*********************************************************************
** Author: Wyatt Griffith
** Date: 04/18/18
** Description: Declaration file for the Team class.
*********************************************************************/
#ifndef TEAM_CPP
#define TEAM_CPP

class Team{

//Member variables
	private:
		Player pointGuard;
		Player shootingGuard;
		Player smallForward;
		Player powerForward;
		Player center;
		int tPoints;

//Member functions
	public:
		Team(Player, Player, Player, Player, Player);
		void setPointGuard(Player);
		Player getPointGuard();
		void setShootingGuard(Player);
		Player getShootingGuard();
		void setSmallForward(Player);
		Player getSmallForward();
		void setPowerForward(Player);
		Player getPowerForward();
		void setCenter(Player);
		Player getCenter();
		int totalPoints();
};
#endif
