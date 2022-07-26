#include "main.h"
#include <string.h>

/**
 * _strchr - locates a char in a string
 * @s: pointer
 * @c: a character
 * Return: c if  found null if not
 */
char *_strchr(char *s, char c)
{
	for (; *s != '\0'; s++)
	{
		if (*s == c)
			return (s);
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
