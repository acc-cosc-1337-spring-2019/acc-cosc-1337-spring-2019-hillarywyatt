#include "bank_account.h"

BankAccount::BankAccount(int act, double bal) :
	account_number(act), balance(bal)
{
}

double BankAccount::get_balance() const    // don't have to pass balance as param becuase balance lives within class
{
	return balance;
}

void BankAccount::deposit(double amount)
{
	if (amount_greater_than_zero(amount))
	{
		balance += amount;
	}

}

void BankAccount::withdraw(double amount)
{
	if (amount > 0 && balance >= amount)
	{
		balance -= amount;
	}
}

bool BankAccount::amount_greater_than_zero(double amount)
{
	return amount > 0;
}

void display(const BankAccount& act) //don't need scope operator :: because friend is free function
//don't need keyword "friend"- compiler knows-is defined in header-don't define twice
{
	std::cout << "Account: " << act.account_number()<< "\n"; //prefix with name of parameter
	std::cout << "Balance: " << act.balance()<< "\n";

}

BankAccount operator +(BankAccount& act1, const BankAccount& act2);//return type BankAccount/compiler knows it is friend
//passing 2 BankAccount class parameters
{
	act1.balance = act1.balance + act2.balance;

	return act1;
}

friend std::ostream & operator << (std::ostream & out, const BankAccount & b);
{
	out << "Account: " << b.account_number() << "\n";// out is instance of ostream class
	out << "Balance: " << b.balance() << "\n";

	return out;
}