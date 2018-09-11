/********************************************************************* 
** Author: Wyatt Griffith
** Date: 04/07/18
** Description:This program promts the user to input an integer. 
**		It then prompts another (or the same) user to guess that number. 
**		It guides the user to the correct answer by stating if the user's 
**		guess is too high or too low. Once the number is correctly 
**		guessed the program will output how many tries it took.
*********************************************************************/ 

#include <iostream>
using namespace std;

int main(){
	int number, guess, tries;
	tries = 0;
	cout << "Enter the number for the player to guess." << endl;
	cin >> number;
	cout << "Enter your guess." << endl;

		while (guess != number){
		cin >> guess;

		if ( guess > number){
			cout << "Too high - try again." << endl;
		}

		else if ( guess < number){
			cout << "Too low - try again." << endl;
		}
		tries++;
	}
	cout << "You guessed it in " << tries << " tries." << endl;
	return 0;
}
