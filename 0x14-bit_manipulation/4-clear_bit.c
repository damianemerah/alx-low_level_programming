#include "main.h"

/**
 * clear_bit - Sets the value if a bit at a given index to 0
 * @n: A pointer to the bit
 * @index: the index to set the value
 * Return: if an error occurs -1
 *         else 1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;

	if (*n & m)
		*n ^= m;

	return (1);
}
