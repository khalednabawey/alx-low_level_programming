#include "main.h"

/**
 * print_alphabet ->
 * A function that prints the alphabet in lower case
 *
 * Retruns: void (no return)
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
