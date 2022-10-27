#include "main.h"

/**
 * binary_to_uint -  a function that converts a binary number
 * to an unsigned int.
 *
 * @b: string of 0 and 1 chars
 *
 * Return: the converted number, or 0 if
 *         there is one or more chars in the string b that is not 0 or 1
 *         b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int len, base_two;
	unsigned int dac_val;

	if (!b)
		return (0);
	dec_val = 0;
	for (len = 0; b[len]; len++)
		;
	for (len--, base_two = 1; len >= 0; len--, base_two *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		if (b[len] & 1)
			dec_val += base_two;
	}

	return (dec_val);
}
