#include "main.h"

/**
 * jack_bauer - prints every min and hour of a day
 *
 * Return: to 0
 */
void jack_bauer(void)
{
	int x, y;

	for (x = 0; x <= 23; x++)
	{
		for (y = 0; y <= 59; y++)
		{
			_putchar(x / 10 + '0');
			_putchar(x % 10 + '0');
			_putchar(':');
			_putchar(m / 10 + '0');
			_putchar(m % 10 + '0');
			_putchar('\n');
		}
	}
}
