#include "main.h"
/**
 * times_table ->  a function that prints the nine time tables,
 *
 * Return: void (no return)
 */
void times_table(void)
{
	int i, j, r;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			r = i * j;
			_putchar('0' + r);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
