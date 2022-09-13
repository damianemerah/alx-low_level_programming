#include <stdio.h>

int main(void)
{
	int i = 99;

	putchar((i / 10) + '0');
	putchar((i / 1) + '0');
	putchar((i % 10) + '0');
	putchar('\n');
	return (0);

}
