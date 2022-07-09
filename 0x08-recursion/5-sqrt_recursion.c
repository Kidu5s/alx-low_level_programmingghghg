#include "main.h"

/**
 * _sqrt_recursion - prints the square root of an integer
 * @n: is the Integer
 *
 * Return: -1 do not have a natural square root
 */
int _sqrt_recursion(int n)
{
	return (sqrt_recursion_2(n, 1));
}

/**
 * sqrt_recursion_2 - makes possible to evaluate from 1 to n
 * @i: same number as n
 * @j: number that itterates from 1 to n
 *
 * Return: 1 on success
 * -1 on error, and errno is set appropriately
 */
int sqrt_recursion_2(int i, int j)
{
	if (j * j == i)
		return (j);
	else if (j * j > i)
		return (-1);
	return (sqrt_recursion_2(i, j + 1));
}
