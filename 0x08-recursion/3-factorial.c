#include "main.h"

/**
 * factorial - prints the factorial of n n!
 * @n: the integer
 *
 * Return: -1 if n is lessthan 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
