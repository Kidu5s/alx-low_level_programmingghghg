#include "main.h"

/**
 * _sqrt_recursion - find the square root of an number
 * @n: is the number
 *
 * Return: the square root of the nubmer or -1 if there are non
 */
int _sqrt_recursion(int n)
{
	return (sqrt_recursion_2(n, 1));
}

/**
 * sqrt_recursion_2 - helper function
 * makes possible to evaluate the square root
 * @n: the number
 * @check: check the number if it has a square root or not
 *
 * Return: the square root on success
 * -1 on if n does not have a square root
 */
int sqrt_recursion_2(int n, int check)
{
	if (check * check == n)
		return (check);
	else if (check > n)
		return (-1);
	return (sqrt_recursion_2(n, check + 1));
}
