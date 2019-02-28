class BankAccount 
{
public:
	BankAccount(int act, double bal);//constructor
	//BankAccount(); --> this would be deault constructor if one not provided
	double get_balance() const;
	void deposit(double amount);
	void withdraw(double amount);

private:
	int account_number;
	double balance;
	bool amount_greater_than_zero(double amount);
};