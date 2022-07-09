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

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
