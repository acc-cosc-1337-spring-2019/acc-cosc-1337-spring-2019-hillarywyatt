#include "bank_account.h"
#include "customer.h"
#include "atm.h"
//#include <vector>
//#include <iostream> // already included in bankaccount.h

int main() 
{
	//BankAccount account(123, 100);
	//BankAccount copy = account;
	//account.deposit(50);
	//std::cout << copy.get_balance();

	BankAccount account(123456, 500); //instance of class BankAcount" account
	Customer customer(account); //new instance of class Customer" customer
	ATM atm(customer); // new instance of class ATM: atm- with ^customer instance as parameter
	atm.display_balance();

	display(account);

	BankAccount d = account; //class copy- d is copy of account instance
	
	BankAccount b(1, 900); //new instance of class BankAccount: b
	BankAccount c = account + b; //new modifiable instance: c is account + b/ didnt change OG account
	//calling operator function- c is act1/ b is act2

	//std::cout << c; 
	//sdt::cin >> c;
	
	std::cout << "\n";
	display c << "\n"; //calls the ostream function which is written to display

	

	/*
	std::vector<BankAccount> accounts;

	BankAccount account(12345689, 500);
	BankAccount account1(55545689, 5000);

	accounts.push_back(account);
	accounts.push_back(account1);

	for (auto act : accounts)
	{
		std::cout << act.get_balance() << "\n";    //will store in heap when adding to vector
	}

	return 0;
	*/
}


/*
for(auto tic_tac_toe: list)
{
	cout << tic_tac_toe << "\n";
}
*/