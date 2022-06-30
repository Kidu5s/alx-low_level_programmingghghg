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

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
				_putchar(' ');
				_putchar('\\');
				_putchar('\n');
		}
	}
}
