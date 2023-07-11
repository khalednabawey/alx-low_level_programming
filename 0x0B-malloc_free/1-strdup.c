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
	int i, size = 0;

	char *arr;

	if (str == NULL)
		return (NULL);

	while (str[size] != '\0')
		size++;

	arr = malloc((size + 1) * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		*(arr + i) = *(str + i);
	}
	arr[size] = '\0';

	return (arr);
}
