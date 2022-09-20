#include "main.h"

/**
 * put2 - Print every second string
 * @str: string
 */

void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(*(s + i));
		}
		i++;
	}
}
