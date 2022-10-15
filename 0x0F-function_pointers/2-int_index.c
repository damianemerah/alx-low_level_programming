#include "function_pointers"

/**
 * int_index - A function that searches for an interger
 * @size: number of elements in the array
 * @cmp:  a pointer to the function to be used to compare values
 * @array: Array to be compared
 * Return: -1 if size < 0 or no element match
 * return pointer to first index that matches
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i;

	if (!array || !cmp)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
