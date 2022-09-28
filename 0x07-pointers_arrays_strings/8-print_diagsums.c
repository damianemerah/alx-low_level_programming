#include "main.h"

/**
 * print_diagsums - Prints the sum of
 * two diagonals of a square matrix of intergers
 *
 * @a: matrix to be summed
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int i, j, p, k = 0, r = 0;

	for (i = 0; i < size; i++)
	{
		p = (i * size) + i;
		k += *(a + p);
	}
	for (j = 0; j < size; j++)
	{
		p = (j * size) + (soze - k - j);
		r += *(a + p);
	}
	printf("%i, %i\n", k, r);
}
