#include "main.h"
#include <stdio.h>

/**
* print_to_98 - print all natural numbers from z to 98.
* @z: the number
*
* Return: returns nothing.
*/
void print_to_98(int z)
{
	if (z < 98)
	{
		for (z = z; z < 98; z++)
		printf("%d, ", z);
		printf("%d\n", 98);
	}
	else
	{
		for (z = z; z > 98; z--)
		printf("%d, ", z);
		printf("%d\n", 98);
	}
}
