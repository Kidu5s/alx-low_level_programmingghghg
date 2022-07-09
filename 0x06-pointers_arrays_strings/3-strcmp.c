#include "main.h"
#include <string.h>

/**
 * _strcmp - compares strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: -15 if not true, 15 if true, 0 if equal
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && j == 0)
	{
		j = s1[i] - s2[i];
		i++;
	}
	return (j);
}
