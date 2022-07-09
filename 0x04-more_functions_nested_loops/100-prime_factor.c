#include <stdio.h>

/**
 * main - prints the largest prime factor
 *
 * Return: 0
 */
int main(void)
{
	long int i;
	long int q; /* divider */
	long int lpf; /* largest prime factor */

	i = 612852475143;
	q = 2;

	while (i != 0)
	{
		if ((i % q) != 0)
		{
			q += 1;
		}
		else
		{
			lpf = i;
			i = i / q;

			if (i == 1)
			{
				printf("%ld\n", lpf);
				break;
			}
		}
	}
	return (0);
}
