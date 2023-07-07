#include <stdio.h>

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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
