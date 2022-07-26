#include "main.h"

/**
 * _memcpy - copy n bytes of data from src to dest
 * @dest: the string to be copied in to
 * @src: the string to be copied
 * @n: the byte
 *
 * Return: dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
