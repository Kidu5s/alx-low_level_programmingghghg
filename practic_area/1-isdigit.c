#include "main.h"

/**
 * _isdigit - checks if an input is digit or not
 * @c: is the integer
 *
 * Return: 1 if digit 0 if not
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
		return (0);
}
