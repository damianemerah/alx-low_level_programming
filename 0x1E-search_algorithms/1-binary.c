#include "search_algos.h"
#include "math.h"

/**
 * binary_search -  a function that searches for a value in a sorted
 * array of integers using the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @value: the value to search for
 * @size: the number of elements in array
 * Return: index of value if exist
 *         else return -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t l, r, m, i;

	if (array != NULL)
	{
		l = 0;
		r = size - 1;

		while (l <= r)
		{
			printf("Searching in array: ");
			for (i = l; i < r; i++)
				printf("%d, ", array[i]);
			printf("%d\n", array[i]);

			m = floor((l + r) / 2);
			if (array[m] < value)
				l = m + 1;
			else if (array[m] > value)
				r = m - 1;
			else
				return (m);
		}
	}
	return (-1);
}
