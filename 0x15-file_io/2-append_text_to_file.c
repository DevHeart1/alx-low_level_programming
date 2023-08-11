#include "main.h"

/**
 * append_text_to_file - appends a text to a file
 * @filename: the name of the file
 * @text_content: the text to append
 *
 * Return: 1 if successful and -1 otherwise
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_D;
	ssize_t bytes_W;

	if (filename == NULL)
	{
		return (-1);
	}

	file_D = open(filename, O_WRONLY | O_APPEND);

	if (file_D == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		bytes_W = write(file_D, text_content, strlen(text_content));

		if (bytes_W == -1)
		{
			close(file_D);
			return (-1);
		}
	}

	close(file_D);
	return (1);
}
