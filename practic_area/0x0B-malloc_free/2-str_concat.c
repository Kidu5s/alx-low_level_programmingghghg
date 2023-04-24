#include "main.h"
#include <stdlib.h>

/**
* *str_concat - concat 2 strings.
* @s1: first string.
* @s2: second string.
*
* Return: pointer to string.
*/

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i = 0, j = 0, k = 0;

	if (s1 != NULL)
		for (; s1[i]; i++)
			;
	if (s2 != NULL)
		for (; s2[j]; j++)
			;

	ptr = malloc(sizeof(char) * (i + j + 1));
	if (ptr == NULL)
		return (NULL);

	while (k < i)
	{
		ptr[k] = s1[k];
		k++;
	}

	while (k < i + j)
	{
		ptr[k] = s2[k - i];
		k++;
	}

	ptr[k] = '\0';
	return (ptr);
}
