#include "main.h"

/**
 * more_numbers - Print number set 5 times
 *
 * Return: Nothing
 */
void more_numbers(void)
{
	int i = 0;
	int j;

	while (i <= 10)
	{
		j = 0;
		while (j <= 14)
		{
			if (j >= 10)
			{
				_putchar(j / 10 + '0');
			}
			_putchar(j % 10 + '0');
			j++;
		}
		i++;
		_putchar('\n');
	}
}
