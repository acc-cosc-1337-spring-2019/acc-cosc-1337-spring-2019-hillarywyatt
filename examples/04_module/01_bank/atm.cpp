#include "atm.h"
#include <iostream>

void ATM::display_balance()
{
	std::cout << "Balance: " << customer.get_balance();
}

void ATM::deposit(double amt)
{
	customer.get_account().deposit(amt);
}

void ATM::withdraw(double amt)
{
	customer.get_account().withdraw(amt);
}

void ATM::display_transactions() const
{
	cout << "Type " << "Amount " << "Balance ";

	for(auto tran : customer.get_account().get_transactions()) //bringing vector in so we can loop through it
	{
		std::cout << tran;
	}
}
