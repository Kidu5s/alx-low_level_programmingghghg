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

	ptr = malloc(sizeof(str) * 1);

	if (str == NULL)
		return (NULL);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		ptr[i] = str[i];
	return (ptr);
}
