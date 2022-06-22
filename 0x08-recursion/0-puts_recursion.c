#include "main.h"

/**
 * _puts_recursion - prints the string
 * @s: the string
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_puts_recursion(s);
		_putchar(*s);
	}
}
