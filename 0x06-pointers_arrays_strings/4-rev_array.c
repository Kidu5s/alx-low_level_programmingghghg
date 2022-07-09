#include "main.h"

/**
 * reverse_array - prints the array in reverse
 * @a: pointer to int
 * @n: number of elements of the array
 *
 * Return: void.
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;
	int tmp;

	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		j--;
	}
}
