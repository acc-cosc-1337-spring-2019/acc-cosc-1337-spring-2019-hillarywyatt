#ifndef BANK_Account_H
#define BANK_ACCOUNT_H


class BankAccount 
{
public:
	BankAccount(int act, double bal);//constructor
	//BankAccount(); --> this would be deault constructor if one not provided
	double get_balance() const;
	void deposit(double amount);
	void withdraw(double amount);

private: //access specifier; data not directly available to users of the class
	int account_number;
	double balance;
	bool amount_greater_than_zero(double amount);
};

# end if //!BANK_ACCOUNT_H