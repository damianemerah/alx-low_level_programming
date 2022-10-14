#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - return sum of all arguments
 * @n: number of arguments
 * Return: n or ) if n = 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;

	int sum = 0;
	unsigned int i;

	va_start(ap, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (0);
}
