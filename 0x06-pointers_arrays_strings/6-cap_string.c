#include "main.h"

/**
 * cap_string - Capitalize all words of a string
 * @str: String
 * Return: String
 */
char *cap_string(char *str)
{
	while (!(str[index] >= 'a' && str[index] <= 'z'))
	{
		if (str[index - 1] == ' ' ||
		    str[index - 1] == '\t' ||
		    str[index - 1] == '\n' ||
		    str[index - 1] == ',' ||
		    str[index - 1] == ';' ||
		    str[index - 1] == '.' ||
		    str[index - 1] == '!' ||
		    str[index - 1] == '?' ||
		    str[index - 1] == '"' ||
		    str[index - 1] == '(' ||
		    str[index - 1] == ')' ||
		    str[index - 1] == '{' ||
		    str[index - 1] == '}' ||
		    str[index - 1] == 0)
			str[index] -= 32;
		index++;
	}

	return (str);
}
