#include "main.h"
#include <string.h>

/**
 * _memset - fills the memory with a constant byte.
 * @s: is a pointer
 * @b: is a character
 * @n: is an integer
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);

}
