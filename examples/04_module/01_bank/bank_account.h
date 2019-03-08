#ifndef BANK_Account_H
#define BANK_ACCOUNT_H
#include <iostream>
#include <vector>
#include "transaction.h"

class BankAccount 
{
public:
	BankAccount(int act, double bal);//constructor
	//BankAccount(); --> this would be deault constructor if one not provided
	double get_balance() const;
	void deposit(double amount);
	void depsoit(int pin, double amount);
	void withdraw(double amount);
	friend void display(const BankAccount& act); //declare "friend" function-- free function/has access to private variables
	friend BankAccount operator +(BankAccount& act1, const BankAccount& act2); //1st non const so we can change it/add to it
//friend function is free function that has access to a class' private data
	friend std::ostream & operator << (std::ostream & out, const BankAccount & b);


private: //access specifier; data not directly available to users of the class
	std::vector<Transaction> transactions;
	int account_number;
	double balance;
	bool amount_greater_than_zero(double amount);
};

#endif //!BANK_ACCOUNT_H