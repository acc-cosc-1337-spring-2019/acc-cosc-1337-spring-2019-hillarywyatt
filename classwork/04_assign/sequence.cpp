#include <vector>
#include <string>
#include "sequence.h"
#include<iostream>

using::std::string;
using std::vector;
using::std::cout;

/*
Write code for void function display_vector that accepts parameter const reference vector of strings.
The function will iterate through the vector and display a string per line.
*/
void display_vector(const std::vector<string>& values)
{
	for (auto v : values)
	{
		std::cout << v << "\n";
	}
}

/*
Write code for void function update_vector_element that accepts parameter reference vector of strings,
a string search_value, and a string replace_value.
The function will iterate through the vector and search for the search_value and if found will
replace the vector element with the replace_value.
*/
void update_vector_element(std::vector<string>& values, std::string search_value, std::string replace_value)
{
	for (auto& v : values)
	{
		if (v == search_value)
		{

			v = replace_value;
			break;
		}
	}

}
