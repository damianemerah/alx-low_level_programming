#include "main.h"

/**
 * print_square - Print square
 * @size: size of the square
 */
void print_square(size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				putchar(35);
			}
			_putchar('\n');
		}
	}
}
