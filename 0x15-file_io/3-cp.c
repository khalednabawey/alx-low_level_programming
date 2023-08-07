#include <stdio.h>
#include <stdlib.h>
#include "main.h"

#define BUF_SIZE 1024

/**
 * error_exit - Print an error message to stderr and exit with specified code
 * @msg: The error message to print.
 * @code: The exit code.
 */
void error_exit(const char *msg, int code)
{
	dprintf(STDERR_FILENO, "%s\n", msg);
	exit(code);
}

/**
 * main - Copies the content of a file to another file.
 * @argc: The number of arguments.
 * @argv: An array of arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, ret;
	char buffer[BUF_SIZE];
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
		error_exit("Usage: cp file_from file_to", 97);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_exit("Error: Can't read from file", 98);

	fd_to = open(
	argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP |
	S_IROTH);
	if (fd_to == -1)
		error_exit("Error: Can't write to file", 99);

	while ((bytes_read = read(fd_from, buffer, BUF_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
			error_exit("Error: Can't write to file", 99);
	}

	if (bytes_read == -1)
		error_exit("Error: Can't read from file", 98);

	ret = close(fd_from);
	if (ret == -1)
		error_exit("Error: Can't close fd", 100);

	ret = close(fd_to);
	if (ret == -1)
		error_exit("Error: Can't close fd", 100);

	return (0);
}

