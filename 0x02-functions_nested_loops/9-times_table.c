#include "main.h"

/**
* times_table - prints the 9 times table
*
* Return: 0.
*/
void times_table(void)
{
	int x, y, result;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			result = (x * y);
			if (y != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (result >= 10)
			{
				_putchar((res / 10) + '0');
				_putchar((res % 10) + '0');
			}
			else if (result < 10 && y != 0)
			{
				_putchar(' ');
				_putchar((result % 10) + '0');
			}
			else
				_putchar((result % 10) + '0');
		}
				_putchar('\n');
	}
}
