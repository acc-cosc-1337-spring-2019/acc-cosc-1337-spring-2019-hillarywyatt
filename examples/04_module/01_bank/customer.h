#ifndef CUSTOMER_H
#define CUSTOMER_H
#include "bank_account.h"

class Customer
{
public:
	Customer(BankAccount act) : account(act) {};// {}-> don't have to define custuctor in cpp file, can have one statement here
	double get_balance() const { return account.get_balance(); }
private:
	BankAccount account;
	
};


#endif// !CUSTOMER_H