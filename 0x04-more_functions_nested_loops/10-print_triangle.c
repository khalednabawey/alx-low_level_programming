#include "main.h"

/**
 * print_triangle -> function that prints a triangle followed by a new line.
 *
 * @size: size and integer parameter.
 *
 * Return: void(no return).
 */

void print_triangle(int size)
{
	int i, j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = n - i; j >= 1; j--)
			{
				_putchar(' ');
			}
			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		putchar('\n');
}


