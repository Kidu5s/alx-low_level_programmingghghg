#include "main.h"
#include <string.h>

/**
 * _strstr - locates a substring
 * @haystack: pointer
 * @needle: pointer
 * Return: begginning of the located sub NUll if not
 */
char *_strstr(char *haystack, char *needle)
{
	if (haystack != NULL)
	{
		return (strstr(haystack, needle));
	}
	else
		return (NULL);
}
