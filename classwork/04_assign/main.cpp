#include "sequence.h"
#include<iostream>

using::std::string;
using std::vector;
using::std::cout;
using::std::cin;

/*
Write code to create a vector of string names, add the values "John", "Mary", "Patty",
"Sam" to the vector, call the function display_vector and pass the names vector as
an argument, prompt user for a name to search for and a value to replace searched value with.
Afterward, call the update_vector_element with the names vector and call the display_vector
function.
Don't worry about displaying a message for values that aren't found.  Assume user will
give you a valid name.
*/

int main()
{

	vector<string>names = {"John", "Mary", "Patty", "Sam" };
	display_vector(names);
	std::string search, replace;


	cout << "Enter a name to search: ";
	cin >> search;
	cout << "Enter a name to replace it with: ";
	cin >> replace;

	update_vector_element(names, search, replace);
	display_vector(names);

	return 0;
}

