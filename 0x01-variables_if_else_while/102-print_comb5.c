#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	int w, x, y, z;

	for (w = '0'; w <= '9'; w++)
	{
		for (x = '0'; x <= '9'; x++)
		{
			for (y = '0'; y <= '9'; y++)
			{
				for (z = '0'; z <= '9'; z++)
				{
					if (((y + z) > (w + x) && y >= w) || w < y)
					{
					putchar(w);
					putchar(x);
					putchar(' ');
					putchar(y);
					putchar(z);
					if (w + x + y + z == 227 && c == 57)
					{
						break;
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
