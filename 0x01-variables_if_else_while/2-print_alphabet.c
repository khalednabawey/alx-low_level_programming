#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a';

	do {
		putchar(c);
		c++;
	} while (c != 'z' + 1);

	return (0);
}

