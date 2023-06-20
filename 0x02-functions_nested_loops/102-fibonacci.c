#include "stdio.h"

/**
 * main - prints the first 50 Fibonacci numbers starting with 1, 2
 *
 * Return: integer (0).
 */

int main(void)
{
	long i = 0;
	long j = 1;
	int n = 0;
	int fib;

	while (n < 50)
	{
		fib = j + i;
		if (n != 49)
			printf("%ld, ", fib);
		else
			printf("%ld\n", fib);
		i = j;
		j = fib;
		n += 1;
	}
	return (0);
}
