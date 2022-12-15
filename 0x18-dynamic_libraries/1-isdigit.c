#include "main.h"

/**
 * _isdigit - Check if character is a digit
 *
 * @c: character for check
 * Return: 1 if @c is a digit; else 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
