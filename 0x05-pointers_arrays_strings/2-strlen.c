#include "main.h"

/**
 * _strlen - calculate string length
 * @s: String for check
 * Return: nothing
 */
int _strlen(char *s)
{
	int len;

	while (*(s + len) != '\0')
	{
		len++;
	}
	return (len);
}
