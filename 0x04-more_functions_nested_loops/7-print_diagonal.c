#include "main.h"

/**
 * print_diagonal - prints digonal lines
 * @n: the number of digonals
 * 
 * Return: void
 */
void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if (j == i)
			{
			_putchar('\\');
			}
			else if (j <= 0)
			{
				_putchar('\n');
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	_putchar('\n');
}
