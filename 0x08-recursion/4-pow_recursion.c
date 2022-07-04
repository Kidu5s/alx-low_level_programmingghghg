#include "main.h"

/**
 * _pow_recursion - prints the power of an integer
 * @x: the first integer to be powered
 * @y: the second integer the power
 *
 * Return: -1 if less than 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
