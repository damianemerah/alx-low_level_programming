#include <stdio.h>
#include "main.h"

/**
 * fizz_buzz - Print number and words fizz buzz
 * Description: Replace multiples of 3 with fizz
 * multiples of 5 with buzz and multiple of
 * 3 and 5 with fizzbuzz
 */
void fizz_buzz(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", i);
		}
		i++;
	}
	putchar('\n');
}
