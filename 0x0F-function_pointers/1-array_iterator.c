#include "function_pointers.h"

/**
 * array_iterator - A  function that executes a function given as a
 * parameter on each element of an array.
 * @array: Array to be targeted
 * @size: size of the array
 * @action: function to be executed
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}			
