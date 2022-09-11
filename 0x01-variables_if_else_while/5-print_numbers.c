#include <stdio.h>

/**
 * main - Print 0 - 10
 *
 * Return: 0
 */
int main(void)
{
	char c = 0;

	while (c < 10)
	{
		printf("%d", c);
		c++;
	}
	printf("\n");
	return (0);
}
