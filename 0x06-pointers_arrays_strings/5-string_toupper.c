#include "main.c"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @str: the str to be changed
 * Return: A ponter to the changed string
 */
char *string_toupper(char *str)
{
	int index = 0;
	while (str[index])
	{
		if (str[index >= 'a' && str[index] <= 'z')
			str[index] -= 32;
		index++;
	}

	return (str);
}
