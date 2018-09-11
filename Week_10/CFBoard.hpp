/*********************************************************************
** Author: Wyatt Griffith
** Date: 06/10/18
** Description: This is the header file for the CFBoard class.
**	It has a two member variables, 4 methods, and a constructor.
**	One variable is a 2D array that represents the game board.
**	The other is an enum variable that represents the game state.
**	The default constructor initializes the board as empty and
**	the gameState to UNFINISHED. It has methods for making a move,
**	updating the gameState, returning the gameState, and
**	printing the board.
*********************************************************************/

#ifndef CFBOARD_HPP
#define CFBOARD_HPP

enum State { X_WON, O_WON, DRAW, UNFINISHED };
class CFBoard{
//Member Variables
	private:
		char board [6][7];			//Game board
		State gameState;			//Enum variable

//Member Functions
	public:
		CFBoard();				//Default Constructor
		bool makeMove(int, char);		//Makes a move
		void updateGameState(int, int);		//Updates the game state
		State getGameState();			//Returns gameState
		void print();				//Prints the board
};
#endif
