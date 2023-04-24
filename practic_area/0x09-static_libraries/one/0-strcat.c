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
	strcat(dest, src);
	return (dest);
}
