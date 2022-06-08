#include "main.h"

/**
 * _islower - checks for lower case
 * @c: The character to print
 *
 * Return: 0 if false 1 if true
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
		return (0);
}
