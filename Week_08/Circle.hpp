/************************************************************************ 
** Author: Wyatt Griffith
** Date: 05/23/18
** Description: This is the header file for the Circle class. It contains
**	the declarations for that Circle class. It has three member
**	variables; one double that holds the radius of the Circle, one
**	static double that holds the maximum possible Radius of a Circle,
**	and a static const double that holds the value of the constant Pi.
**	It has four member funcitons, a default constructor that initializes
**	the radius to 1.0 if there is no input for a radius, a constructor 
**	that initializes the radius to an inputted value, a function for 
**	calculating the area of a Circle and a function for setting the 
**	maxRadius variable. There is also an exception class called 
**	IllegalRadius whose description is below.
************************************************************************/ 
#ifndef CIRCLE_HPP
#define CIRCLE_HPP

class Circle{
//Member Variables
	private:
		double radius;				//Radius of Circle
		static double maxRadius;		//Maximum Radius of Circle
		const double PI = 3.14159;		//Constant for Pi

//Member Functions
	public:
		Circle();				//Default Constructor
		Circle(double);				//Constructor
		double calcArea();			//Calculates the Area
		static void setMaxRadius(double);	//Sets maxRadius variable

//Exception Class
/**********************************************************************
** This is an exception class called IllegalRadius that handles the
** exceptions associated with radii that exceed the maximum radius of
** a Circle. It has a double member variable called badRadius
** It has a constructor that initializes badRadius to a value 
**********************************************************************/
		class IllegalRadius{

			private:
				double badRadius;	//Member Variable
				
			public:
				IllegalRadius(double);	//Constructor
		};
};
#endif
