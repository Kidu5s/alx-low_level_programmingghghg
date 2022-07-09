#include "main.h"

/**
 * _strncpy - copys the string
 * @dest: the first string
 * @src: the second string
 * @n: n times copy
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (n > j)
	{
		if (src[j] == '\0')
		{
			for (; j < n; j++)
			{
				dest[i] = '\0';
				i++;
			}
		}
		else
		{
			dest[i] = src[j];
			j++;
			i++;
		}
	}
	return (dest);
}
