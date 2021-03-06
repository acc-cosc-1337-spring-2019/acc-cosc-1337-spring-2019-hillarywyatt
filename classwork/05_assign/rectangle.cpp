#include "rectangle.h"
/*
Write the class function code for the Rectangle class with one constructor that accepts two int parameters (width, height),
has one public function area that returns the area of the rectangle, and one private function calculate_area
that calculates area of the rectangle.  The class has 3 int private variables area, width, and height.
*/

Rectangle::Rectangle(int wid, int hei) :
	width(wid), height(hei)
{
	calculate_area();
}

int Rectangle::get_area() const   // don't have to pass balance as param becuase balance lives within class
{
	
	return area;
}

void Rectangle::calculate_area()
{
	if (width > 0 && height > 0)
	{
		area = width * height;
	}
}





