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
	if (n == 1 || n == 0)
		return (n);
	if (n < 0)
		return (-1);
	return (_sqrt(0, n));
}

/**
 * _sqrt - function that return the root of a square
 * @n: Squared number
 * @x: root
 * Return: root of n
 */

int _sqrt(int x, int n)
{
	if (x * x == n)
		return (x);
	if (x == n / 2)
		return (-1);
	return (_sqrt(x + 1, n));
}
