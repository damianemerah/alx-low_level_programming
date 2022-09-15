#include "main.h"

/**
 * print_numbers - Print numbers from 0 - 9
 *
 * Return: noting
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
