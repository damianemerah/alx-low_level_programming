#include "main.h"

/**
 * str_concat - A  function that concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *conc_str;
	int l1, l2, index, size = 0, conc_index = 0;

	if (s1 == NULL)
		s2 = "";
	if (s2 == NULL)
		s2 = "";

	l1 = 0;
	while (s1[l1] != '\0')
		l1++;

	l2 = 0;
	while (s2[l2] != '\0')
		l2++;

	size = l1 + l2;

	conc_str = malloc((sizeof(char) * size) + 1);

	if (conc_str == 0)
		return (NULL);

	for (index = 0; s1[index]; index++)
		conc_str[conc_index] = s1[index];

	for (index = 0; s2[index]; index++)
		conc_str[conc_index++] = s2[index];

	return (conc_str);
}
