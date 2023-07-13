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
	if (nmemb == 0 || size == 0)
		return (NULL);

	void *ptr = malloc(nmemb * size);

	if (ptr != NULL)
		memset(ptr, 0, nmemb * size);
	else
		return (NULL);

	return (ptr);
}
