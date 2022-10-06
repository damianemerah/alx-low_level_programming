#include "main.h"

/**
 * _calloc - a function that allocates memory for an array, using malloc
 * @nmemb: array
 * @size: size of each byte
 * Return: Pointer or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return NULL;

	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);
	for (index = 0; index < (nmemb * size); index++)
		arr[index] = 0;
	return (arr);
i}
