#include "main.h"

/**
 * more_numbers - prints the numbers between 0 and 14
 * 10 times
 * Retrun: void
 */

void more_numbers(void)
{
	int x;
	int y;

	for (x = 0; x < 10; x++)
	{
		for(y = 0; y <= 9; y++)
		{
			_putchar('0' + y);
			if (x == 1 && y <= 4)
			{
				_putchar(x);
				_putchar(y);
			}
		}
			_putchar('\n');
	}
			_putchar('\n');
}
