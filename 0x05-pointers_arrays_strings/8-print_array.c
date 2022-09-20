#include <stdio.h>
#include "main.h"

/**
 * print_array - Print elements of an array
 * @a: Array
 * @n: Number of array to be printed
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	unsigned long i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	_putchar('\n');
}
