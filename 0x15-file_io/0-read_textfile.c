#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * read_textfile ->
 * function that reads a text file and prints it to the POSIX standard output.
 *
 * @filename: the name of the file.
 * @letters: number of letters.
 *
 * Return: size_t size of the file.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	buffer = malloc(letters + 1);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	n = read(fd, buffer, letters);
	if (n == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	buffer[n] = '\0';
	write(1, buffer, n);
	free(buffer);
	close(fd);
	return (n);
}
