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
	int c = 48;

	while (c <= 57)
	{
		if (c != 50 && c != 52)
		{
			_putchar(c);
		}
		c++;
	}
	_putchar('\n');
}
