#include "main.h"
#include <stdlib.h>
/**
 * _strdup ->
 * function that returns a pointer to newly allocated space memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: string.
 *
 * Return: char *.
 */
char *_strdup(char *str)
{
	int i, size;

	size = i = 0;

	if (str == NULL)
		return (NULL);
	while (*(str + i))
		size += 1;
	char *arr = malloc(size);

	for (i = 0; i < size; i++)
	{
		*(arr + i) = *(str + i);
	}
	return (arr);
}
