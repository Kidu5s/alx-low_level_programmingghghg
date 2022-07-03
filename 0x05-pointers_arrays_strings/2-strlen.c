#include "main.h"
#include <string.h>

/**
 * _strlen - returns the length of a string
 * @s: the string
 *
 * Return: strlen
 */

int _strlen(char *s)
{
	int length;

	length = 0;
	
	while (s[length])
	{
		length++;
	}
	
	return (length);
}
