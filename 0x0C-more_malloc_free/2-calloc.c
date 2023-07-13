#include "main.h"
#include <stdlib.h>
/**
 * _calloc -> a function that allocates memory for an array, using malloc.
 *
 * @nmemb: int.
 * @size: int.
 *
 * Return: void *.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr != NULL)
	{
		for (i = 0; ptr[i] = 0; i++)
		{
			ptr[i] = 0;
			return (ptr);
		}
	}
	else
		return (NULL);
}
