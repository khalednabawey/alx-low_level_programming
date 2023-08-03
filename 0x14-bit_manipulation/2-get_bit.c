#include "main.h"
#include <stdio.h>
/**
 * get_bit -> get the value of a bit at a given index.
 *
 * @n: number to evaluate.
 * @index: index starting from 0.
 *
 * Return: Value of bit at index, or -1 if error.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int t;

	if (index > 64)
		return (-1);

	t = n >> index;

	return (t & 1);
}
