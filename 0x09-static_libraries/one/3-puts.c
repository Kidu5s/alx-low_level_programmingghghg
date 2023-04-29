#include "main.h"
#include <stdio.h>
/**
 * _puts - desplays string
 * @str: is the string
 *
 * Return: a string
 */

void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
