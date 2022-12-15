#include "main.h"

/**
 * _strstr - The _strstr() function will find the first occurence
 * of the substring needle in the string haystack.
 * The terminating null byte \0 are not compared
 *
 * @haystack: string where the search is made
 * @needle: string whose occurence is searched in haystack
 *
 * Return: REturns a pointer to the begining of the located
 * substring, or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		i = 0;
		if (haystack[i] == needle[i])
		{
			while (haystack[i] == needle[i])
			{
				if (needle[i + 1] == '\0')
				{
					return (haystack);
				}
				i++;
			}
		}
		haystack++;
	}
	return ('\0');
}
