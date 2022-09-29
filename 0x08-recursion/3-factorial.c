#include "main.h"

/**
 *  function that returns the factorial of a given number.
 *  @n: given number
 *  Return: If n is lower than 0, the function
 *  should return -1 to indicate an error
 */
int factorial(int n)
{
	int f = 0;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		f = n + factorial(n - 1);
	return (f);
}

