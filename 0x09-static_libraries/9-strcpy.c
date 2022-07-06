#include "main.h"

/**
* _strcpy - copy the string
* @dest: the first string
* @src: the second string
*
* Return: dest
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
