#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array of chars
 * @size: size of the array
 * @c: the characters
 *
 * Return: NULL if size = 0
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}
	if (str == NULL) 
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
		str[i] = c;

	return (str);
}
