#include "transaction.h"

std::ostream & operator<< (std::ostream & out, const Transactions &t)
{
	out << "Type " << "Amount " << "Balance ";
	out << t.type << " " << t.amount << " " << t.balance;

	return out;
}