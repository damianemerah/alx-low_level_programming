#include "main.h"

/**
 * _puts_recursion - function that prints a string, followed by a new line.
 * @s: String
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (i == '\0')
		return;
	_putchar(s[i]);
	i++;
	_puts_recursion(*s);
}
