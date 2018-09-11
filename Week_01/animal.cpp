/****************************************************************************** 
** Author: Wyatt Griffith
** Date: 04/02/18
** Description: A program that takes a string as input and returns that string.
**		It asks the user for their favorite animal and returns it.
******************************************************************************/ 

#include <iostream>
#include <string>

// a simple example program
int main()
{
    std::string faveAnimal;
    std::cout << "Please enter your favorite animal." << std::endl;
    std::cin >> faveAnimal;
    std::cout << "Your favorite animal is the " << faveAnimal;
    std::cout << "." << std::endl;    
    
    return 0;
}
