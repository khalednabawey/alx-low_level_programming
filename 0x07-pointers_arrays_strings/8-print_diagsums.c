#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -> a function that prints the sum of the two diagonals
 * of a square matrix.
 *
 * @a: a matrix to sum its diagonals.
 * @size: the size of the matrix
 *
 * Return: void (No Return).
 */
void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	sum1 = sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d", sum1, sum2);
}
