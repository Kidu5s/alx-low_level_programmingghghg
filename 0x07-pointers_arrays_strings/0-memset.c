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
	return (memset(s, b, n));
}
