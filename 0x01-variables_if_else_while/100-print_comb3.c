#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	int i = 49;
	int j = 48;

	while (j != 58)
	{
		while (i != 58)
		{
			if (i != j && j < i)
			{
				putchar(j);
				putchar(i);
				putchar(',');
				putchar(' ');
			}
			i++;
		}
		i = 49;
		j++;
	}
	putchar('\n');
	return (0);

}

