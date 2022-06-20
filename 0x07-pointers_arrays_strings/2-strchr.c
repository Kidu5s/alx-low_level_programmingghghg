#include "main.h"
#include <string.h>

/**
 * _strchar - locates a char in a string
 * @s: pointer
 * @c: a character
 * Return: c if  found null if not
 */
char *_strchr(char *s, char c)
{
	if (c > 0)
	{
	return (strchr(s, c));
	}
	else
	return (NULL);
}
