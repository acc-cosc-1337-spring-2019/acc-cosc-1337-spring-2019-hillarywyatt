#include "rectangle.h"
#include<iostream>
#include <vector>
/*
Create a vector of rectangles
Add 3 Rectangle classes to the vector:
Width	Height		Area
  4		 5			  20
 10		10			 100
100		10			1000

Iterate the vector and display the Area for each Rectangle on one line and the total area for the 
3 rectangles.
*/
int main() 
{
	int total_area = 0;
	std::vector<Rectangle> rectangles;
	//std::cout << return_val();

	Rectangle rectangle1(4, 5);
	Rectangle rectangle2(10, 10);
	Rectangle rectangle3(100, 10);

	rectangles.push_back(rectangle1);
	rectangles.push_back(rectangle2);
	rectangles.push_back(rectangle3);

	for (auto rect : rectangles)
	{
		std::cout << rect.get_area() << "\n";
		total_area += rect.get_area();
	}
	std::cout << "Total area of 3 rectangles: " << total_area << "\n";

	return 0;
}

