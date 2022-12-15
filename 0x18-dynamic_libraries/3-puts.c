#include "main.h"

/**
 * _puts - Print out string to stdout
 * @str: string to be printed
 * Return: nothing
 */
void _puts(char *str)
{
	int n = 0;

	while (*(str + n) != '\0')
	{
		_putchar(*(str + n));
		n++;
	}
	_putchar('\n');
}
