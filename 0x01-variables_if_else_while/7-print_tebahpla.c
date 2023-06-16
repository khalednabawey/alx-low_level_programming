#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'z';

	do {
		putchar(c);
		c--;
	} while (c != 'a' - 1);
	putchar('\n');
	return (0);
}

