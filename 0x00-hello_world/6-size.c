#include <stdio.h>

/**
 * main - print the string in printf function
 *
 * Description: using the main function 
 * this prigram prints the size of data type
 * Return: 0
 */
int main(void)
{
	char c;
	int i;
	long l;
	long long ll;
	float f;

	printf("Size of char: %ld byte(s)\n", sizeof(c));
	printf("Size of int: %ld byte(s)\n", sizeof(i));
	printf("Size of long int: %ld byte(s)\n", sizeof(l));
	printf("Size of long long int: %ld byte(s)\n", sizeof(ll));
	printf("Size of float: %ld byte(s)\n", sizeof(f));
	return (0);
}
