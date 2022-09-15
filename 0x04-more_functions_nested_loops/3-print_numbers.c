#include "main.h"

/**
 * print_numbers - Print numbers from 0 - 9
 *
 * Return: noting
 */
void print_numbers(void)
{
	int i;

	i = '0';
	while (i <= '9')
	{
		_putchar(i);
	}
	_putchar('\n');
}
