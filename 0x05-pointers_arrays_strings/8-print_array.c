#include "main.h"

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
		printf("%d, ", a[i -1]);
	}
	if (a[i - 1] == n)
	{
		printf("%d", a[i]);
	}
}
