#include "main.h"

/**
 * factorial - prints the factorial of n n!
 * @n: the integer
 *
 * Return: -1 if lessthan 0 or the n!
 */

int factorial(int n)
{
	if (n <= 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (n);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
