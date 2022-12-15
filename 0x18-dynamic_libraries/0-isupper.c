#include "main.h"
#include <stdio.h>

/**
 * _isupper - Checks for upper case
 *
 * @c: Character to check
 * Return: 1 if @c is uppercase
 * and return 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
