#include "main.h"
#include <string.h>

/**
 * _strcat - concatinates the string
 * @dest: the string 1
 * @src: the string 2
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		i++;
	}

	for (j = 0;src[j] != '\0'; j++)
	{
		dest[i] = src[i];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
