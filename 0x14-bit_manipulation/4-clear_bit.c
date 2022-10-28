#include "main.h"

/**
 * clear-bit - Sets the value if a bit at a given index to 0
 * @n: A pointer to the bit
 * @index: the index to set the value
 * Return: if an error occurs -1
 *         else 1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned ling int) * 8))
		return (-1);
	*n &= ~(1 << index);

	return (1);
}
