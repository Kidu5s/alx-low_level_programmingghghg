#include "main.h"
#include <stdio.h>

/**
 * print_array - prints array
 * @a: array
 * @n: integer
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (i < n)
		{
		printf("%d", a[i]);
		if (i != n - 1)
		{
		printf(", ");
		}
		}
	}
	printf("\n");
}
