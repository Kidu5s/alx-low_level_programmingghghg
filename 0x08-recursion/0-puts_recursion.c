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
	if (*s != '\0')
	{
		/* prints the first char of the str b/c it
		 * pointing to the mem address of the first char
		 */
		_putchar(*s);
		/* will increment the memory address */
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
