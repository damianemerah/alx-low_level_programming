#include "main.h"

/**
 * print_square - Print square
 * @size: size of the square
 */
void print_square(size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			putchar(35);
		}
		_putchar('\n');
	}
}
