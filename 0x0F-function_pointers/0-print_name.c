#include "main.h"

/**
 * print_name - A function that prints name
 * @name: String of name to print
 * @f: Ponter to print function
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
