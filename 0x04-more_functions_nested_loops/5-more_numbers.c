#include "main.h"

/**
 * more_numbers - Print number set 5 times
 *
 * Return: Nothing
 */
void more_numbers(void)
{
	int i = '0';
	int j;

	while (i <= '5')
	{
		j = '0';
		while (j <= '14')
		{
			_putchar(j);
			j++;
		}
		i++;
		_putchar('\n');
	}
	_putchar('\n');
}
