#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - lasd
 * @s1: 
 * @s2: slkd
 * @n: sld
 *
 * Return: ;asdl
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int k;

	if (s1 != NULL)
		for (; s1[i]; i++)
			;
	if (s2 != NULL)
		for (; s2[j]; j++)
			;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= j)
		n = j;
	ptr = malloc(sizeof(char) * (i + n + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		ptr[i] = s2[j];
		i++;
	}

	ptr[i] = '\0';
	return (ptr);
}
