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
	int sum = 0, i;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			int j;
			char *arg;

			arg = argv[i];
			for (j = 0; arg[j] != '\0'; j++)
			{
				if (arg[j] < 48 || arg[j] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
		}
	}
	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
