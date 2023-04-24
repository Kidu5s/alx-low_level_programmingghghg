#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates the string
 * @dest: the first string
 * @src: the second string
 * @n: the n times
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
