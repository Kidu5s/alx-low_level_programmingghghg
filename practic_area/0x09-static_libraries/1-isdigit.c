#include "main.h"

/**
 * _isdigit - checks if it is a number between 0 and 9
 * @c: is the input
 * Return: 1 if it is true 0 if false
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
