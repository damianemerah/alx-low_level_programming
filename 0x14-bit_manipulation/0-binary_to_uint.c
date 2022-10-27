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
	unsigned int decimal = 0;
	int multiplicador = 1, index = 0;

	if (b == NULL)
		return (0);
	for (index = 0; b[index] != '\0'; index++)
	{
		if (b[index] != '0' && b[index] != '1')
			return (0);
	}
	for (index = index - 1; index >= 0; index--)
	{
		char currentCharacter;

		currentCharacter = b[index];
		if (currentCharacter == '1')
		{
			decimal += multiplicador;
		}
		multiplicador = multiplicador * 2;
		if (index == 0)
			break;
	}
	return (decimal);
}
