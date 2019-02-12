#include<iostream>

int main() 
{
	int num = 5;
	std::cout << "Address: " << &num <<"\n"; //shows where variable is stored
	std::cout << "value: " << num;
	return 0;
}