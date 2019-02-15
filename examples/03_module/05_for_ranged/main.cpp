#include<string>
#include<iostream>
#include "sample_for_ranged.h"

int main() 
{
	//call count letters function
	loop_string_w_index("John");
	loop_string_w_auto("John");

	loop_vector_w_index();

	loop_vector_w_auto();

	std::vector<int>nums = { 44, 55, 77, 11, 99 };

	nums.push_back(25); //append value
	nums.erase(nums.begin() + 1);  //delete value at position 1 (55)

	loop_vector_w_index(nums);

	//this supposed to be somewhere else?
	for (auto n : nums)
	{
		std::cout << n << "\n";
	}

	

	return 0;
}