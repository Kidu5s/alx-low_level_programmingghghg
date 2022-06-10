#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n: print int
 * Return: Always 0.
 */

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)

		if (i == 0 && i < 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
		}
			_putchar('\n');
}
