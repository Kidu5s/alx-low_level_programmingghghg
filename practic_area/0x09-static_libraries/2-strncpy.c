#include "main.h"
#include <string.h>

/**
 * _strncpy - copys teh string
 * @dest: the first string
 * @src: the second string
 * @n: n times copy
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
