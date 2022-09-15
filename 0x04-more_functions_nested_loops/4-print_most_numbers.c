#include "main.h"

/**
 * print_most_numbers - Print num 0 - 9
 *
 * Description: Print numbers 0 - 9
 * Except 2 and 4
 * Return: nothing
 */
void print_most_numbers(void)
{
	int c = '0';

	while (c <= '9')
	{
		if (c != '2' && c != '4')
		{
			_putchar(c);
		}
	}
	_putchar('\n');
}
