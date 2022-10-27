#include "main.h"

/**
 * got _bit -  a function that returns the value of a bit at a given index.
 * @n: bit
 * @index: the index to get the value at starting from 0
 * Return: the value of the bit at the index index
 *         -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	if ((n & (1 << index)) == 0)
		return (0);
	return (1);
}
