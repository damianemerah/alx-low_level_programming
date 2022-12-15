#include "main.h"

/**
 * _strlen - calculate string length
 * @s: String for check
 * Return: len as interger
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}
	return (len);
}
