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
	strrev(s);
	_putchar('\n');
}
