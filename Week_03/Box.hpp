/*********************************************************************
** Author: Wyatt Griffith
** Date: 04/18/18
** Description: The declaration file for the Box class.
*********************************************************************/
#ifndef BOX_HPP
#define BOX_HPP

class Box{

//Member Variables
	private:			
		double height;
		double width;
		double length;

//Member Functions
	public:
		Box();
		Box(double, double, double);
		void setHeight(double);
		void setWidth(double);
		void setLength(double);
		double calcVolume();
		double calcSurfaceArea();
};
#endif
