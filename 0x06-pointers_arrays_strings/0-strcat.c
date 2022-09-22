#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: destination
 * @src: source
 * Return: @dest
 */

char *_strcat(char *dest, char *src)
{
	int dest_len = 0, index = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index] != '\0'; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
