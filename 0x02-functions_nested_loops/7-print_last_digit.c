#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @i: Where the number is
 *
 * Return: always 0
 */
int print_last_digit(int i)
{
	int c = i % 10;
	
	if (c < 0)
	c *= -1;
	_putchar('0' + c);
	return (c);
}
