#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: a pointer that holds the memory address
 * of the first character of the string
 *
 * Return: Nothing.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;
	_putchar(*s);
	_puts_recursion(s + 1);
}
