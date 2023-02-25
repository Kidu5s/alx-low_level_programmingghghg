#include "function_pointers.h"
#include <stdio.h>

/**
* int_index - searches for an integer.
* @array: pointer to the array
* @size:  size of the array
* @cmp: pointer to the function to be used to compare values
*
* Return: -1 if size <= 0 or array == NULL or cmp == NULL or if not found
* the index if found
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int v;
	int checker = 0;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		v = cmp(array[i]);
		checker += v;
		if (v != 0)
			return (i);
	}
	if (checker == 0)
		return (-1);
	return (0);
}
