#include "main.h"

/**
 * print_chessboard - prints chessboard
 * @a: is an array
 * Return: void
 */
void print_chessboard(char (*a)[8][8])
{
	int i, j;

	for (i = 0; i <= 8; i++)
	{
		for (j = 0; j <= 8; j++)
		{
			if (a[i][j] != '\0')
			{
				_putchar(a[i][j] + '0');

			}
		}
	}
	_putchar('\a');
}
