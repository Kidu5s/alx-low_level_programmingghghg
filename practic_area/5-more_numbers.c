#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14 ten times
 *
 * Return: void
 */
void more_numbers(void)
{
	int n;
	int i;
	int j;
	int k;

	for (i = 0; i <= 9; i++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n <= 9)
			{
				k = n;
			}
			else
			{
				j = n / 10;
				k = n % 10;
				_putchar(j + '0');
			}
				_putchar(k + '0');
		}
				_putchar('\n');
	}
}
