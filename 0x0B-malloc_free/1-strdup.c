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

	while (*str)
	{
		size++;
		str++;
	}

	if (str == NULL)
		return (NULL);
	array = malloc(size * sizeof(char));

	if (array == 0)
		return (NULL);

	for (i = 0; i < sizeof(str); i++)
		array[i] = str[i];

	array[size] = '\0';

	return (array);
}
