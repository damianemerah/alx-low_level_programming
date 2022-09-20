#include "main.h"

/**
 * swap_int - Swap two intergers a,b
 * @a: first integer
 * @b: second interger
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*b = *a;
	*a = tmp;
}
