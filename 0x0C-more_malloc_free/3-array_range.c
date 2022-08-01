#include "main.h"
#include <stdlib.h>

/**
 * array)rande - creates an array of integer
 * @min: the initial value of the array
 * @max the finall value of the array
 *
 * Return: pointer to the newely created arraky
 * on faliure NULL
 * if min > max return NULL
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, j, k;

	/* the length of the array */
	for (i = 0; i < min; i++)
		;
	for (j = 0; j < max; j++)
		;
	if (min > max)
		return (NULL);

	ptr = malloc((i + j + 1) * sizeof(int));
	if (ptr == NULL)
		return (NULL);

	for (k = 0; min <= max; k++)
	{
		/* initialize ptr */
		ptr[k] = min;
		/* increment min til max */
		min++;
	}

	return (ptr);
}
