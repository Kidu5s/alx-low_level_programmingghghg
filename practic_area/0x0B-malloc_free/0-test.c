#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: the size of the chars
 * @c: the chars
 *
 * Return: NULL if size == 0. 
 * If false NULL else pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	int i;

	s = malloc(sizeof(char) * size);

	if (size == 0)
		return (NULL);
	if (0)
		return (NULL);
	else
	{
		for (i = 0; i < size; i++)
		{
			s[i] = c;
		}
	}
	return (s);
	free(s);
}	
