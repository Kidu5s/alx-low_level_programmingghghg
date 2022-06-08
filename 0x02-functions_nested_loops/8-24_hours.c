#include "main.h"

/**
 * jack_bauer - prints every min
 *
 * Return: to 0
 */
void jack_bauer(void)
{
	int i, j, k, l;

	for (i = 0; i <= 9; i++)
	{
	for (j = 0; j <= 9; j++)
	{
	for (k = 0; k <= 9; k++)
	{
	for (l = 0; l <= 9; l++)
	{
		if ((i <= 2 && j <= 3) && (k <= 5 && l <= 9))
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(k);
					_putchar(l);
					_putchar('\n');
				}
				}
			}
		}
	}
}
