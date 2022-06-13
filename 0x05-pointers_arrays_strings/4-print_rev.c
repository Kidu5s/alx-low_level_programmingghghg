#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_rev - prints the revers of a string
 * @s: is the string
 *
 * Return: void
 */
void print_rev(char *s)
{
	char i;
	

	for (i = 0; i <= 9; i--)
	{
		_putchar(s[i] + '0');
	}

	_putchar('\n');
}
