#include "main.h"

/**
 * _strcmp - Compare two strings
 * @s1: String 1
 * @s2: String 2
 * Return: If s1 < s2, the negative difference of the first unmatched char
 *         If s1 == s2, 0
 *         If s1 > s2, the positive difference of the first unmatched char
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
