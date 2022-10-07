#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: smallest number in the array
 * @max: lagrest value in the array
 * Return:  pointer to the address of the memory block
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, j = 0;

	arr = malloc(sizeof(*arr) * ((max - min) + 1));

	if (arr == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
		arr[j++] = i;
	return (arr);
}
