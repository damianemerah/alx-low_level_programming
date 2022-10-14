#include "variadic_functions.h"

/**
 * print_numbers - Print all numbers seperated by seperator
 * @separator: Separator
 * @n: Number of numbers to print
 */

void print_numbers(const char *separator, const unsigned int n, ...);
{
	va_list nums;
	unsigned int i;

	va_start(nums, n);

	if (separator == NULL)
		return;

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int));
		if (i != (n - 1))
			printf("%s", separator);
	}
	printf('\n');

	va_end(nums);
}
