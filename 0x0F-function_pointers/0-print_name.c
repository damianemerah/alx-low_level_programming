#include "main.h"

/**
 * print_name - A function that prints name
 * @name: String of name to print
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
