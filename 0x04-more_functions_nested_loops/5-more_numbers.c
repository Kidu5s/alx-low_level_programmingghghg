#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int w;
	int x;
	int y;
	int z;

	w = 0;
	x = 0;
	while (w < 10)
	{
		while (x <= 14)
		{
			if (x < 10)
			{
				z = x;
			}
			else
			{
				y = x / 10;
				z = x % 10;
				_putchar (y + '0');
			}
			_putchar(z + '0');
			x++;
		}
		w++;
		x = 0;
		_putchar('\n');
	}
}
