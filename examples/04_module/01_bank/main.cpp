#include "bank_account.h"
#include "customer.h"
#include "atm.h"
#include <vector>
#include <iostream>

int main() 
{
	//BankAccount account(123, 100);
	//BankAccount copy = account;
	//account.deposit(50);
	//std::cout << copy.get_balance();

	BankAccount account(123456, 500);
	Customer customer(account);
	ATM atm(customer);
	atm.display_balance();
	

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