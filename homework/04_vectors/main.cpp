#include<iostream>
#include "vectors.h"

using::std::cout;
using::std::cin;

/*
Prompt user for 1 for Get Max from vector and 2 for Get primes.
Prompt user for a number and return max value or list of primes
and display them to screen.
Program continues until user decides to exit.

*/
int main() 
{
	char choice;
	int menu_choice;

	do
	{
		int num; 
		int i = 0;
		int number;
		vector<int> numbers;
	

		cout << "Enter '1' to Get Max from vector or '2' to Get Primes: ";
		cin >> menu_choice;

		if (menu_choice == 1)
		{
			do
			{
				cout << "Enter 5 numbers, one at a time: ";
				cin >> num;
				numbers.push_back(num);
				++i;
			} while (i < 6);

			cout << "Max Value: " << get_max_from_vector(numbers) << "\n";
		}
		else
		{
			cout << "Enter a number: ";
			cin >> number;

			//vector <int> prime_numbers = vector_of_primes(number);
			//cout << "Primes up to that number: " << prime_numbers << "\n";
			cout << "Primes up to that number: " << vector_of_primes(number) << "\n";
		}

		cout << "Would you like to work with another number? Enter 'Y' if yes: ";
		cin >> choice;

	} while (choice == 'Y' || choice == 'y');

}