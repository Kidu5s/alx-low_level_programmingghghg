#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - adds two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substructs two integeres
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integeres
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the division of a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - finds the remainder
 * @a: the first integer
 * @b: the second integer
 *
 * Return: the remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
