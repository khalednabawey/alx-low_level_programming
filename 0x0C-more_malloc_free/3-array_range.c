#include "main.h"
#include <stdlib.h>
/**
 * array_range -> a function that creates an array of integers.
 *
 * @max: int.
 * @min: int.
 *
 * Return: int *.
 */
int *array_range(int min, int max)
{
	int i;
	int *arr;

	if (min > max)
		return (NULL);
	arr = malloc(((max - min) + 1) * sizeof(int));

	for (i = min; i <= max; i++)
		arr[i] = i;
	return (arr);
}
