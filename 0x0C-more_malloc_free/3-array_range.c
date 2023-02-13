#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int array_length(int min, int max);
/**
 * array_range - creates an array of integer
 * @min: the initial value of the array
 * @max: the finall value of the array
 *
 * Return: pointer to the newely created arraky
 * on faliure NULL
 * if min > max return NULL
 */
int *array_range(int min, int max)
{
	int *ptr;
	int len, i;

	if (min > max)
		return (NULL);

	len = array_length(min, max);

	ptr = malloc(len * sizeof(int));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		/* initialize ptr */
		ptr[i] = min;
		/* increment min til max */
		min++;
	}

	return (ptr);
}
/**
 * array_length - gets the length of the arry
 * @min: the first element of the array
 * @max: the last element of the array
 *
 * Return: the length
 */
int array_length(int min, int max)
{
	int len;

	/* the length of the array */
	for (len = 0; min != max; len++)
		min++;
	len++;

	return (len);
}
