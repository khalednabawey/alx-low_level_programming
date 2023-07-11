#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid -> Entry point.
 *
 * @grid: grid to free.
 * @height: columns of string.
 *
 * Return: void.
 */
void free_grid(int **grid, int height)
{
	int i;
	int *ptr;

	for (i = 0; i < height; i++)
	{
		ptr = grid[i];
		free(ptr);
	}
	free(grid);
}
