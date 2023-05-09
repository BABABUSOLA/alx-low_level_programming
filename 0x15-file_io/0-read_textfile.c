#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file sheet and also prints it to POSIX stdout part.
 * @filename: A pointer to the file name.
 * @letters: The no of letters that the
 *           function should be able to read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual no of bytes that the function can print and read.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t open, read, write;
	char *buffer;

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	if (filename == NULL)
		return (0);

	open = open(filename, O_RDONLY);
	read = read(o, buffer, letters);
	write = write(STDOUT_FILENO, buffer, r);

	if (open == -1 || write != read)
	{
		free(buffer);
		return (0);
	}
	if (read == -1 || write == -1)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(open);

	return (write);
}

