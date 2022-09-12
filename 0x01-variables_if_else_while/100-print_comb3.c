#include <stdio.h>

/**
 * main - Print number combination
 *
 * Definition: Print possible combinations of two digits
 *
 * Return: 0
 */

int main(void)
{
	int i, j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			if (j > i)
			{
				putchar(i);
				putchar(j);

				if (i != '8')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
}
