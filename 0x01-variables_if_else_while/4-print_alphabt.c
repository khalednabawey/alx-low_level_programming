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
		if (c != 'q' || c != 'e')
		{
			putchar(c);
			c++;
		}
	} while (c != 'z' + 1);
	putchar('\n');
	return (0);
}

