#include "main.h"
#include <string.h>

/**
 * puts_half - prints the half of a string
 * @str: the string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i;
	int strLen;

	for (strLen = 0; str[strLen] != '\0'; strLen++)
	{

	}
		for (i = (strLen / 2); str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	 if ((strLen - 1) / 2 == 0)
	{
		for (i = ((strLen - 1) / 2); str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
