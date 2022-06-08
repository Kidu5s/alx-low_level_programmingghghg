#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @i: Where the last digit is 
 *
 * Return: always 0
 */
int print_last_digit(int i)
{
	i = i % 10;
	_putchar(i);
	return (0);
}
