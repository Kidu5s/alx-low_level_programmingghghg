#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints out a string
 * @str: string
 *
 * Return: void
 */

void puts2(char *str)
{
	int i;
/*	int sLen;

	for (sLen = 0; str[sLen] != '\0'; sLen++);
	{
	}*/
	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
