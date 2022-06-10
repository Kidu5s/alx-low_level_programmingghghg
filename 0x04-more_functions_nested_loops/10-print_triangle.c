#include "main.h"

/**
 * print_triangle - prints triangle on the screen
 * @size: the size of the triangle
 * Return: 0
 */
void print_triangle(int size)
{
	int i;
	int j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j <= size; j--)
		{
			if (j > 0)
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
