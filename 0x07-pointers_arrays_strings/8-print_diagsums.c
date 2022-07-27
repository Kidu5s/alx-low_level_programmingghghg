#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print the diagonal sums of a 2D array
 * @a: pointer that holds the memory address of the array
 * @size: the size of the array
 *
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = 0;
	int sumRightDiag = 0;
	int sumLeftDiag = 0;

	/* change the two dimantional array to one D */
	while (i < (size * size))
	{
		sumRightDiag += a[i];
		i += size + 1;
	}
	while (j < ((size * size) - size))
	{
		j += size - 1;
		sumLeftDiag += a[j];
	}
	printf("%d, %d\n", sumRightDiag, sumLeftDiag);
}
