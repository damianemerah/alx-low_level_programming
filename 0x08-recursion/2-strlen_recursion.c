#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: String
 * Return: Length of string s
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s)
	{
		n++;
		_strlen_recursion(s + 1);
	}
	else
		return (n);
}
