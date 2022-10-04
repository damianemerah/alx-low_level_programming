#include "main.h"

/**
 * _strdup - A function that returns a pointer to a newly allocated
 * space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: String
 * Return: Pointer
 */

char *_strdup(char *str)
{
	char *array;
	int i, size;

	size  = 0;
	while (str[size] != '\0')
	{
		size++;
	}

	if (str == NULL)
		return (NULL);
	array = malloc((size + 1) * sizeof(char));

	if (array == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		array[i] = str[i];

	array[size] = '\0';

	return (array);
}
