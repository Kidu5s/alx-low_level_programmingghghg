#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: the minimum value
 * @max: the maximum value
 *
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int i, len;
	int *ptr;

	if (min > max)
		return (NULL);
	for (len = 0; min != max; len++)
		min++;
	len++;
	ptr = malloc(sizeof(int) * (len++));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
