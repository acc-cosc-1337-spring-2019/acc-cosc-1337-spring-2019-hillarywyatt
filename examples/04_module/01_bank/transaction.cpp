#include "transaction.h"

std::ostream & operator << (std::ostream & out, const Transactions &t)
{
	
	out << t.type << " " << t.amount << " " << t.balance << "\n";

	return out;
}