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
	int i;
	int *ptr;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * (min + max + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
		ptr[i] = i;
	return (ptr);
}
