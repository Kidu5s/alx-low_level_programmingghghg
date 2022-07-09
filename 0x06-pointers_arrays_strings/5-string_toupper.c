#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a sting to upper
 * @s: string to modify
 *
 * Return: string modified
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] > 96 && s[i] < 123)
			s[i] -= 32;
		i++;
	}
	return (s);
}
