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

	if (s1 == NULL)
		for (; s1[i]; i++)
			;
	if (s2 == NULL)
		for (; s2[j]; j++)
			;
	if (n >= j)
		j = n;
	ptr = malloc(sizeof(char) * (i + j + 1));

	for (k = 0; k < i; k++)
		ptr[k] = s1[k];
	for (k = 0; k < (i + j); k++)
		ptr[k] = s2[k - i];

	ptr[k] = '\0';
	return (ptr);
}
