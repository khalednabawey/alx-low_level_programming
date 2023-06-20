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
		_putchar('0');
		for (j = 1; j <= 9; j++)
		{
			r = i * j;
			_putchar(',');
			_putchar(' ');
			(r / 10) ? _putchar('0' + r / 10) : _putchar(' ');
			_putchar('0' + r % 10);
		}
		_putchar('\n');
	}
}
