#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index -> searches for an integer.
 *
 * @array: array to search through.
 * @size: number of elements in the array.
 * @cmp: pointer to the function to be used to compare values.
 *
 * Return: int.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	while (i < size)
	{
		if (cmp(array[i]) == 1)
			return (i);
		i++;
	}

	return (-1);
}
