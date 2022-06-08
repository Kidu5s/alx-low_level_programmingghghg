#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @i: Where the number is
 *
 * Return: always 0
 */
int print_last_digit(int i)
{
	if (i%10 >= 0)
	{	
	_putchar('0' + i%10);
	}
	return (0);
}
