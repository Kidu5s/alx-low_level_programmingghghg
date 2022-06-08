#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @i: Where the number is
 *
 * Return: always 0
 */
int print_last_digit(int i)
{
	int print_last_digit;

	print_last_digit = i % 10;
	return (print_last_digit);
}
