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
	int i;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
	;
	i++;
	ptr = malloc(sizeof(char) * i);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
		ptr[i] = str[i];

	ptr[i] = '\0';
	return (ptr);
}
