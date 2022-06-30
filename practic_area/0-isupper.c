#include "main.h"

/**
 * _isupper - checks if a character is upper
 * @c: is the character
 *
 * Return: 1 if uppercase 0 if not
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
		return (0);
}
