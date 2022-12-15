#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: Pointer
 * @b: constant byte
 * @n: number of byte
 * Return: The pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
