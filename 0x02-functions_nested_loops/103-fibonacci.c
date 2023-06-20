#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	int j = 1;
	int s = 0,
	int x;

	while (1)
	{
		x = i + j;
		if (x % 2 == 0)
			sum += x;
		i = j;
		j = x;
		if (x > 4000000)
			break;
	}
	printf("%d\n", s);
	return (0);
}
