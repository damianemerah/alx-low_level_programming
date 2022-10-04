#iclude "main.h"

/**
 * str_concat - A  function that concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *conc_str;
	int index, size = 0, conc_index = 0;

	if (s1 == NULL)
		s2 = "";
	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index] || s2[index]; index++)
		size++;

	conc_str = malloc(sizeof(char) * size);
	if (conc_str == NULL)
		return (NULL);
	for (index = 0; s1[index]; index++)
		conc_str[conc_index] = s1[index];
	for (index = 0; s2[index]; index++)
		conc_str[conc_index++] = s2[index];
	return (conc_str);
}
