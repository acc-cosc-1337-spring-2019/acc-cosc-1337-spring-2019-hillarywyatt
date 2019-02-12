#include "loops.h"
/*
WITH LOOP OF YOUR CHOICE:
Write code for function factorial that accepts an int num
and returns the num's factorial

factorial(5);
1*2*3*4*5

returns 120

DON'T FORGET TO WRITE TEST CASE.  See file loop_test.cpp
*/

int factorial_of_num(int num)
{
	int i = 1, factorial = 0;

	while (i <= num)
	{
		factorial = (num - i) * factorial;
		++i;
		
	}
	return factorial;
}
