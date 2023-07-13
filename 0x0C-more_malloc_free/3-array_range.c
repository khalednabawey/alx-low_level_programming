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
	int i, j = 0;
	int *arr;

	if (min > max)
		return (NULL);
	arr = malloc(((max - min) + 1) * sizeof(int));

	if (arr != NULL)
	{
		for (i = min; i <= max; i++)
		{
			arr[j] = i;
			j++;
		}
		return (arr);
	}
	else
		return (NULL);
}
