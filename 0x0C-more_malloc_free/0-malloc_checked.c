#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes to be allocated
 *
 * Return: A pointer to the allocated memroy
 * if it fails exit with 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
