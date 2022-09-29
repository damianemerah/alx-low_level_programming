#include "main.h"

int _sqrt_recursion(int n);
int _sqrt(int n);

/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: Number
 * Return: -1 If n does not have a natural square root
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n));
}

/**
 * _sqrt - function that return the root of a square
 * @n: Squared number
 * Return: root of n
 */

int _sqrt(int n)
{
	int x = 0;

	if (n == 0 || n == 1)
		return (n);
	if (x > n / 2)
		return (-1);
	if (x * x == n)
		return (x);
	return (_sqrt(x + 1));
}
