#include "main.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <unistd.h>
#include <sys/stat.h>
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
	FILE *fp;

	fp = fopen(filename, "w");

	if (filename == NULL || fp == NULL)
		return (-1);

	if (text_content != NULL)
		fputs(text_content, fp);

	fclose(fp);
	return (1);
}
