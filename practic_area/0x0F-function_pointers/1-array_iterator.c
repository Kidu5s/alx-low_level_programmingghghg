#include "function_pointers.h"
#include <stdio.h>

/**
* array_iterator -  executes a function given as a parameter on each element
* of an array.
* @array: pointer to the array
* @size:  size of the array
* @action: pointer to function you need to use
*
* Return: noting
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || size == 0 || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
