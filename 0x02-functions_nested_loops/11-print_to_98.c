#include "main.h"
#include <stdio.h>

/**
* print_to_98 - print all natural numbers from n to 98.
* @n: the number
*
* Return: returns nothing.
*/
void print_to_98(int n)
{
	int x;

	x = n;

	if (n > 98)
	{
		for (x = n; x >= 98; x--)
		{
		if (x > 98)
		{
			printf("%d, ", x);
		}
		else if (x / 10 == 9 && x % 10 == 8)
		{
			printf("%d", x);
		}
		}
			printf("\n");
	}
	else if (n < 98)
	{
		for (x = n; x <= 98; x++)
		{
		if (x < 98)
		{
			printf("%d, ", x);
		}
		else if (x / 10 == 9 && x % 10 == 8)
		{
			printf("%d", x);
		}
		}
			printf("\n");
	}
	else
	{
		printf("%d", x);
		printf("\n");
	}
}
