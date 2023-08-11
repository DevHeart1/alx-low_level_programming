#include "main.h"

/**
 * error_97 - check if argument is not correct
 * @argc: number of argument
 *
 * Return: nothing
 */

void error_97(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * error_98 - if file_from does not exit
 * @check: check
 * @file_from: file
 * @fd_from: fd_from
 * @fd_to: fd_to
 *
 * Return: nothing
 */

void error_98(ssize_t check, char *file_from, int fd_from, int fd_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(98);
	}
}

/**
 * error_99 - if write to file_to fails
 * @check: check
 * @file_to: file to
 * @fd_from: fd_from
 * @fd_to: fd_to
 *
 * Return: nothing
 */

void error_99(ssize_t check, char *file_to, int fd_from, int fd_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(99);
	}
}

/**
 * error_100 - can't close file descriptor
 * @check: check
 * @fd: file descriptor
 *
 * Return: nothing
 */

void error_100(int check, int fd)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copy file_from to file_to
 * @argc: number of argument
 * @argv: array of argument
 *
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	ssize_t r, w;
	int fd_from, fd_to, close_from, close_to;
	char buffer[1024];
	mode_t file_perm;

	error_97(argc);
	fd_from = open(argv[1], O_RDONLY);
	error_98((ssize_t)fd_from, argv[1], -1, -1);
	file_perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, file_perm);
	error_98((ssize_t)fd_to, argv[2], fd_from, -1);

	r = 1024;
	while (r == 1024)
	{
		r = read(fd_from, buffer, 1024);
		error_98(r, argv[1], fd_from, fd_to);
		w = write(fd_to, buffer, r);
		if (w != r)
			w = -1;
		error_99(w, argv[2], fd_from, fd_to);
	}

	close_to = close(fd_to);
	close_from = close(fd_from);
	error_100(close_to, fd_to);
	error_100(close_from, fd_from);
	return (0);
}
