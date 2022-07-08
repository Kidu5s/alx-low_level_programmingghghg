#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: pointer to char
 *
 * Return: NULL str = NULL or If there is insufficent memory
 */
char *_strdup(char *str)
{
	char *ptr;

	ptr = malloc(sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}
	else if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		ptr = str;
	}
	return (ptr);
	free(ptr);
}
