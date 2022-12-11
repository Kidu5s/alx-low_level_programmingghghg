#include "main.h"

/**
* _prime_number_2 - Makes possible to evaluate from 2 to n
* @i: same number as n
* @j: number that iterates from 2 to n
*
* Return: On success 1.
* On error, 0 is returned, and errno is set appropriately.
*/
int _prime_number_2(int i, int j)
{
	if (i == j)
	{
		return (1);
	}
	else if (i % j == 0)
	{
		return (0);
	}
		return (_prime_number_2(i, j + 1));
}

/**
* is_prime_number - returns the natural square root of n
* @n: Number Integer
*
* Return: On success 1.
* On error, 0 is returned, and errno is set appropriately.
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime_number_2(n, 2));
}
