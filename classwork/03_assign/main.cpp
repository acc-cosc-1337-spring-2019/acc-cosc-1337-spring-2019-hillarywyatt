#include "loops.h"
#include<iostream>

using::std::cin;
using::std::cout;
/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
int main() 
{
	int num;
	char choice;
	do 
	{
		cout << "Enter a number: ";
		cin >> num;

		cout << factorial_of_num(num);
		cout << "Do you want to continue: Y or N";
		cin >> choice;

	} while (choice == 'y' || choice == 'Y');
	return choice;
}