#include "main.h"

/**
 * create_file - The function creates a file
 * @filename: Represents name of file
 * @text_content: Represents content of file
 *
 * Return: 1 on success and 0 on error
 */

int create_file(const char *filename, char *text_content)
{
	int file_D;
	ssize_t bytes_W;

	if (filename == NULL)
	{
		return (-1);
	}

	file_D = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

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
