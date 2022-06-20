#include "main.h"

/**
 * swap_int - swaps the value of two integer
 * @a: the first integer
 * @b: the second integer
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{	
	int notToChange;	/* Declard a new variable */

	notToChange = *a;	/* Assign the pointer to the new variable */
	*a = *b;	/* Assign the value of pointer b to a */
	*b = notToChange; /* Assign the uncanged value of a to b */
}
