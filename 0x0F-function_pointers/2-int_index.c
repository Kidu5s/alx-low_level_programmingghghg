#include "function_pointers.h"
#include <stdio.h>

/**
* int_index - searches for an integer.
* @array: pointer to the array
* @size:  size of the array
* @cmp: pointer to the function to be used to compare values
*
* Return: noting
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int v;
	/*int counter = 0;*/

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		v = cmp(array[i]);
		/*counter += v;*/
		if (v != 0)
			return (i);
	}
	/**
	 * if (counter == 0)
	 * return (-1);
	 *
	 * return (0);
	 */
}
