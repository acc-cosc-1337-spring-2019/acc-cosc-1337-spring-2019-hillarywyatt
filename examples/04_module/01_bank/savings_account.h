#ifndef SAVINGS_ACCOUNT_H
#define SAVINGS_ACCOUNT_H
#include "bank_account.h"

class SavingsAccount : public BankAccount
{
public:
	SavingsAccount(int act, double bal, float i = .9) : // <-dont have to create an interest-this is default(default parameter/optional param w/ defaul value
		BankAccount(act, bal), interest_rate(i) {} //initializer list- initializes new instance of BankAccount with these params
	void add_interest_earned();

private:
	const float interest_rate;
	const float time = 1.0 / 12.0;

};



#ednif //!SAVINGS_ACCOUNT_H