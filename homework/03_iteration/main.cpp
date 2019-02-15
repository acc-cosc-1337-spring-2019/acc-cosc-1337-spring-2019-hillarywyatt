#include<iostream>
#include<string>
#include "dna.h"

using::std::cout;
using::std::cin;
using::std::string;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	char choice;
	int menu_choice;

	
	do
	{

		string dna;
		cout << "Enter '1' to get the GC content of DNA or '2' to get the DNA's complement: ";
		cin >> menu_choice;

		cout << "Enter DNA sequence: ";
		cin >> dna;

		if(menu_choice == 1)
		{
		
			cout << get_gc_content(dna) << "\n";
		}
		else
		{
			cout << get_dna_complement(dna) <<"\n";
		}

		cout << "Would you like to work with DNA? Enter 'Y' if yes: ";
		cin >> choice;

	} while (choice == 'Y' || choice == 'y');
	

}