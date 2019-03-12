#ifundef TRANSACTION_H
#define TRANSACTION_H
#include <string>
#include <iostream>

class Transaction
{
public:
	Transaction(std::string& t, double amt, double bal) :
		type(t), amount(amt), balance(bal) {}
	friend std::ostream & operator << (std::ostream & out, const Transactions &t);

private:
	std::string type; // "Depsoit" "Withdraw" "Inquiry"
	double amount;
	double balance;

};

#endif // _TRANSACTION_H