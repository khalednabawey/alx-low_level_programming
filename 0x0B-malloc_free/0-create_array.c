#include "main.h"
#include <stdlib.h>
/**
 * create_array -> a function that creates an array of chars,
 * and initializes it with a specific char.
 *
 * @size: size of the array.
 * @c: character to initialize to.
 *
 * Return: char *.
 */
char *create_array(unsigned int size, char c)
{
	char *ptr = malloc(size);

	if (ptr == NULL)
	{
		return (ptr);
	}
	else if (size == 0)
	{
		return (NULL);
	}
	int i;

	for (i = 0; i < size; i++)
	{
		*(ptr + i) = c;
	}
	return (ptr);
}
