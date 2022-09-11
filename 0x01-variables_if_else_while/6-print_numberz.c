#include <stdio.h>

/**
 * main - Print 0 - 10 without type: char
 *
 * Return: 0
 */
int main(void)
{
	int c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
