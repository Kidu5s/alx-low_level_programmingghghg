#include "main.h"

/**
* print_times_table - prints the times table for z
* @z: The number to multiplication table
*
* Return: Nothing.
*/
void print_times_table(int z)
{
	int x, y, result;

	if (!(z > 15 || z < 0))
	{
		for (x = 0; x <= z; x++)
		{
			for (y = 0; y <= z; y++)
			{
				result = (x * y);
				if (y != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (result < 10 && y != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((result % 10) + '0');
				}
				else if (result >= 10 && result < 100)
				{
					_putchar(' ');
					_putchar((result / 10) + '0');
					_putchar((result % 10) + '0');
				}
				else if (result >= 100 && y != 0)
				{
					_putchar((result / 100) + '0');
					_putchar((result / 10) % 10 + '0');
					_putchar((result % 10) + '0');
				}
				else
					_putchar((result % 10) + '0');
			}
					_putchar('\n');
		}
	}
}
