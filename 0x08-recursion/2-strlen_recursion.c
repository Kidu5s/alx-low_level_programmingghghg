#include "main.h"

/**
 * _strlen_recursion - prints the lengthe of a string
 * @s: the string
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int strLen;

	strLen = 0;
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
	strLen = 1 + _strlen_recursion(s + 1);
	}
	return (strLen);
}
