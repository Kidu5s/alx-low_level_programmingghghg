#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Return a pointer to a an allocated memory
 * that holds a copy of string
 * @str: The string
 *
 * Return: On Success A pointer to memroy allocated
 * NULL if insufficient memory
 * NULL if str == NULL
 */
char *_strdup(char *str)
{
	char *ptr;
	int i;
	int j;

	if (str == NULL)
		return (NULL);
	for (j = 0; str[j] != '\0'; j++)
		;/* Will increament j */
	j++; /* in order to add the '\0' */

	ptr = malloc(sizeof(char) * j);

	if (ptr == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		ptr[i] = str[i];

	ptr[i] = '\0';
	return (ptr);
}
