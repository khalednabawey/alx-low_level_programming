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
	void *r;

	if (nmemb == 0)
		return (NULL);
	else if (size == 0)
		return (NULL);

	r = malloc(nmemb * size);

	if (r == NULL)
		return (NULL);
}
