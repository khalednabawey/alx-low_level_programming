#include <stdio.h>
#include <stdlib.h>

/**
 * main -> Entry point.
 *
 * @argc: This is the argument count.
 * @argv: This is the argument vector.
 *
 * Return: This return to 0.
 */
int main(int argc, char *argv[])
{
	int a, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	if (a < 0)
	{
		printf("0\n");
		return (0);
	}
	while (a >= 0)
	{
		if (a >= 25)
			a -= 25;

		else if (a >= 10)
			a -= 10;

		else if (a >= 5)
			a -= 5;

		else if (a >= 2)
			a -= 2;

		else if (a >= 1)
			a -= 1;
		else
			break;
		coins += 1;
	}
	printf("%d\n", coins);
	return (0);
}
