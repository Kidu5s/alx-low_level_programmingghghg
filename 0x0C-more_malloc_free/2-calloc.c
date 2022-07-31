#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: the number of element sof the array
 * @size: the size of the memry needd
 *
 * Return: NULL on error
 * on Success a pointer to the memory allocated
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
