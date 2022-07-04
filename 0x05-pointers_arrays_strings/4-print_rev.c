#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_rev - prints the revers of a string
 * @s: is pointer where the address of the string is kept
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i;
	int length;

	for (length = 0; s[length] != '\0'; length++)
	{

	}

	for (i = length; i >= 0; i--)
	{
		if (s[i] != '\0')
		_putchar(s[i]);
	}
	_putchar('\n');
}
