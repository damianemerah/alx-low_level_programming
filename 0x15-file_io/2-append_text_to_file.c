#include "main.h"

/**
 * append_text_to_file - Append text at the end of a file;
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file;
 *
 * Return: -1 - if the function fails or filename is NULL
 *         -1 if the file does not exist or user lacks write permissions
 *         otherwise 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int 0, w, len = 0;

	if (!filename)
		return (-1);
	if (text_content)
	{
		for (len = 0. text_content[len], len++)
			;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(0);

	return (1);
}
