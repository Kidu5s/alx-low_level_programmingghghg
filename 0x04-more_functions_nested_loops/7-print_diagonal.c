#include "main.h"

/**
 * print_diagonal - prints the diagonal '\' lines
 * @n: is an integer if represents how many diagonals
 *
 * Return: Always 0.
 */

void print_diagonal(int n)
{
	int i;
	int j;

	for (j = 0; j <= n; j++)
	{
		for (i = 1; i <= n; i++)
		{
			if (i >= 0)
			{
				_putchar('\\');
			}
		}
				_putchar('\n');
			}
	if (n > 0 || n == 0)			
	_putchar('\n');
		}
