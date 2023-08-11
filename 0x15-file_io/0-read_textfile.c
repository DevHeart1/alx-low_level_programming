#include "main.h"

/**
 *
 *
 *
 *
 *
 *
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_D;
	char *buffer_space;
	ssize_t bytes_R;
	ssize_t bytes_W;



	file_D = open("filename", O_RDONLY);
	if (file_D == NULL)
		return (0); /* The program returns 0 if file can not be opened. */

	if (filename == NULL)
		return (0);

	buffer_space = malloc(sizeof(char) * (letters + 1));
	if (buffer_space == NULL)
		return (0);

	bytes_R = read(file_D, buffer_space, letters);
	if (bytes_R == NULL)
	{
		close(file_D);
		return (0);
	}

	bytes_W = write(STDOUT_FILENO, buffer_space, letters - 1);
	if (bytes_W == NULL)
		return (0);

	close(file_D);
	free(buffer_space);

	return (bytes_r);
}
