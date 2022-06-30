#include "main.h"

/**
 * print_line - prints line
 * @n: number of line
 *
 * Return: void
 */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (i > 0)
		{
			_putchar('_');
		}
		else
		{
			_putchar('\n');
		}			
	}
	_putchar('\n');
}
