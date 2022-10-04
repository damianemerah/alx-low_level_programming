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
	int size = 0;
	int index = 0;

	if (s1 == NULL)
		s2 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[index] != '\0')
		size++;
	while (s2[index] != '\0')
		size++;
	conc_str = malloc(sizeof(char) * size)
		if (conc_str == NULL)
			return (NULL);
	for (index = 0; s1[index]; index++)
		conc_str[index] = s1[index];
	for (index = 0; s2[index]; index++)
		conc_str[index++] = s2[index];
	return (conc_str);
}
