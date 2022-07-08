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
	char *s;
	unsigned int i;
	char 

	s = malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}
	else if (s == NULL)
	{
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
