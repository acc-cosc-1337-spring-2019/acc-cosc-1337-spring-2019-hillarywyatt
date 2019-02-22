#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "rectangle.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

/*
Create a test case to test the Rectangle class with following values:
Width	Height		Area
  4		 5			  20
 10		10			 100
100		10			1000

*/
TEST_CASE("Test get area")
{
	//Rectangle rectangle(4, 5); //have to create instance of class to test
								//call function with new param to test function

	//REQUIRE(rectangle.get_area() == 20);

	//Rectangle rectangle(10, 10);
	//REQUIRE(rectangle.get_area() == 100);

	//Rectangle rectangle(100, 10);
	//REQUIRE(rectangle.get_area() == 1000);
}
