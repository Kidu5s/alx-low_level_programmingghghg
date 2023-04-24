#include "main.h"
#include <string.h>

/**
 * _memcpy - copies memory area to memory area
 * @dest: a pointer
 * @src: a pointer
 * @n: is integer
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
