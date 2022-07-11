#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s;

    s = _strdup("ALX SE");
    if (s == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
    printf("%s\n", s);
  
    return (0);
}

/**
 * _strdup - duplicates strings
 * @str: a pointer to char, the string
 *
 * Return: NULL if str is equal to NULL
 * On success return a pointer to dupicated string
 * Return NULLL if insufficient memory
 */
char *_strdup(char *str)
{
	char *ptr;
	int i;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		/* Increment the value of i */
	}
	ptr = malloc(sizeof(char) * i); /* dereferenct the allocation memory to ptr */

	for (i = 0; str[i] != '\0'; i++)
	{
		if (ptr == NULL)
			return (NULL);
		else
			ptr[i] = str[i]; /* duplicat the stirngs */
	}
	return (ptr);
	free(ptr);
}
