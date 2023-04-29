#include "search_algos.h"

/**
 * linear_search - A function that searches for a value in
 * an array using linear search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: The value to search for
 * Return: -1 if array is not present or array is NULL
 *         index of value if exit
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array || array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (array[i] == value)
				return (i);
			else if (i > size)
				return (-1);
		}
	}
	return (-1);
}
