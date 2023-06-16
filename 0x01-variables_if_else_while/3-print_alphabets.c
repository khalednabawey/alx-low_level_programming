#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	c = 'a';

	do {
		putchar(c);
		c++;
	} while (c != 'z' + 1);

	c = 'A';
	do {
		putchar(c);
		c++;
	} while (c != 'Z' + 1);
	putchar('\n');
	return (0);
}
