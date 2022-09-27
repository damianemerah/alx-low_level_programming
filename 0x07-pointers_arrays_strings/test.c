#include <stdio.h>

void main(char *s)
{
	s = "Hello World";

	while (*s)
	{
		printf("%c", *s);
		s++;
	}
}
