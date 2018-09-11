/*********************************************************************
** Author: Wyatt Griffith
** Date: 06/10/18
** Description: This file contains the function definitions for the
**	the CFBoard class. The default constructor initializes the
**	gameState and board. The makeMove method makes a move for
**	the player whose char is inputted into the column that was
**	inputted. The updateGameState method takes the row and collumn
**	of the last move and updates the gameState variable if the
**	game has been won or drawn. The get gameState method returns
**	the gameState variable. The print method prints the game
** 	board for debuggin.
*********************************************************************/
#include "CFBoard.hpp"
#include <iostream>

/********************************************************************* 
** Default Constructor: Initializes each array element as empty and
**	the gameState to UNFINISHED
*********************************************************************/ 
CFBoard::CFBoard(){
//Set each element to 'E'
	for(int i = 0; i < 6; i++){
		for(int j = 0; j < 7; j++)
			board[i][j] = 'E';
	}
//Set gameState to UNFINISHED
	gameState = UNFINISHED;
}

/*********************************************************************
** makeMove(): Takes an int and char for the collumn and player making
**	a move. If the game is finished of the collumn is full, it
**	returns false. Otherwise it makes the move, calls the
**	updateGameState method and returns true.
*********************************************************************/
bool CFBoard::makeMove(int column, char player){
//If the game is already finished
	if(gameState != UNFINISHED)
		return false;

//If that collumn is full
	else if(board[5][column] != 'E')
		return false;

//If the move can be made
	else{
		int index = 0;

//Shifts move to the bottom
		while(board[index][column] != 'E')
			index++;
		board[index][column] = player;

//Updates gameState
		updateGameState(index, column);
		return true;
	}	
}

/*********************************************************************
** updateGameState: Takes two ints, the indecies of the last move.
**	If the game has been won or drawn it updates gameState.
*********************************************************************/
void CFBoard::updateGameState(int row, int col){
	bool isWon = false;
	char player = board[row][col];
	
//Horizontal Check
	for(int i = 0; i < 4; i++){
		if((board[row-3+i][col] == player) && (board[row-2+i][col] == player) && (board[row-1+i][col] == player) && (board[row+i][col] == player))
			isWon = true;
	}

//Vertical Check
	for(int i = 0; i < 4; i++){
		if((board[row][col-3+i] == player) &&(board[row][col-2+i] == player) &&(board[row][col-1+i] == player) &&(board[row][col+i] == player))
			isWon = true;
	}

//Ascending Diagonal Check
	for(int i = 0; i < 4; i++){
		if((board[row-3+i][col-3+i] == player) && (board[row-2+i][col-2+i] == player) && (board[row-1+i][col-1+i] == player) && (board[row+i][col+i] == player))
			isWon = true;
	}

//Descending Diagonal Check
	for(int i = 0; i < 4; i++){
		if((board[row-3+i][col-i+3] == player) && (board[row-2+i][col-i+2] == player) && (board[row-1+i][col-i+1] == player) && (board[row+i][col-i] == player))
			isWon = true;
	}

//Check Who One
	if(isWon){
		switch(player){
			case 'x':
				gameState = X_WON;
				break;
			case 'o':
				gameState = O_WON;
				break;
		}
		return;
	}

//Check for Unfinished Game
	gameState = DRAW;
	for(int i = 0; i < 6; i++){
		for(int j = 0; j < 7; j++){
			if(board[i][j] == 'E'){
				gameState = UNFINISHED;
				return;
			}
		}
	}
}

/*********************************************************************
** getGameState(): Returns the gameState
*********************************************************************/
State CFBoard::getGameState(){
	return gameState;
}

/*********************************************************************
** print(): Prints the board for testing
*********************************************************************/
void CFBoard::print(){
	for(int i = 0; i < 6; i++){
		std::cout << std::endl;
		for(int j = 0; j < 7; j++)
			std::cout << " | " << board[i][j] << " | ";
	}
	std::cout << std::endl;
}

