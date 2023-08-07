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
	FILE *file;
	ssize_t num_read, num_written;
	char *buffer;

	if (filename == NULL)
		return (0);

	file = fopen(filename, "r");
	if (file == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		fclose(file);
		return (0);
	}

	num_read = fread(buffer, sizeof(char), letters, file);
	num_written = write(STDOUT_FILENO, buffer, num_read);

	free(buffer);
	fclose(file);

	if (num_read != num_written || num_written < 0)
		return (0);

	return (num_written);
}
