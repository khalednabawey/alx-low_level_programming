#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked -> Write a function that allocates memory using malloc.
 *
 * @b: int.
 *
 * Return: void *.
 */
void *malloc_checked(unsigned int b)
{
	void *r = malloc(b);

	if (r == NULL)
	{
		exit(98);
	}
	return (r);
}
