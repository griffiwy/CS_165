/********************************************************************* 
** Author: Wyatt Griffith
** Date: 04/07/18
** Description: This program takes in the amount of time an object has been falling 
**              and outputs the distance it has fallen in that time.
*********************************************************************/ 
#include <iostream>
using namespace std;

double fallDistance (double fallTime){
  double distance, g;
  g = 9.8;
  distance = (0.5*g)*(fallTime*fallTime);
  cout << "Your object fell " << distance << " meters." << endl ;
  return distance;
}

