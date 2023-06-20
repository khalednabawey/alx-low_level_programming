#include "main"
/**
 * jack_bauer -> a function that prints every minute of the day of Jack Bauer.
 *
 * Return:
 * -> void (no return)
 *
 */
void jack_bauer(void)
{
	int i2, i3, i5, i9;

	for (i2 = 0; i2 <= 2; i2++)
	{
		for (i3 = 0; i3 <= 3; i3++)
		{
			for (i5 = 0; i5 <= 5; i5++)
			{
				for (i9 = 0; i9 <= 9; i9++)
				{
					_putchar('0' + i2);
					_putchar('0' + i3);
					_putchar(':');
					_putchar('0' + i5);
					_putchar('0' + i9);
					_putchar('\n');
				}
			}
		}
	}
}
