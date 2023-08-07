#include "main.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<sys/types.h>
/**
 * create_file -> function that creates a file.
 *
 * @filename: string name.
 * @text_content: string content.
 *
 * Return: int.
 */
int create_file(const char *filename, char *text_content)
{
	if (filename == NULL)
		return (-1);

	int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
	{
		perror("open");
		return (-1);
	}

	if (text_content != NULL)
	{
		ssize_t written = write(fd, text_content, strlen(text_content));

		if (written == -1)
		{
			perror("write");
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
