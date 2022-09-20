#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - Print str in reverse
 * @s: string
 */
void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
	{
		_putchar(*(s + len));
	}
	_putchar('\n');
}
