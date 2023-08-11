#include "main.h"

/**
 * read_textfile - This function reads a text file and prints it to the POSIX
 * standard output
 * @filename: This represents the  name of the file to read
 * @letters: This represents the number of letters
 *
 * Return: the number of letters it could read or 0 if failed
 */

ssize_t read_textfile(const char *filename, size_t letters) {
    int file_D;
    char *buffer_space;
    ssize_t bytes_R;
    ssize_t bytes_W;

    if (filename == NULL)
        return (0);

    file_D = open(filename, O_RDONLY);
    if (file_D == -1)
        return (0); // Failed to open the file

    buffer_space = malloc(sizeof(char) * (letters + 1));
    if (buffer_space == NULL) {
        close(file_D);
        return (0); // Failed to allocate memory
    }

    bytes_R = read(file_D, buffer_space, letters);
    if (bytes_R == -1) {
        close(file_D);
        free(buffer_space);
        return (0); // Failed to read from the file
    }

    bytes_W = write(STDOUT_FILENO, buffer_space, bytes_R);
    if (bytes_W == -1) {
        close(file_D);
        free(buffer_space);
        return (0); // Failed to write to standard output
    }

    close(file_D);
    free(buffer_space);

    return(bytes_W);
}
