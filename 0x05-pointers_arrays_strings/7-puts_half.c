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
	int i, n;
	int strLen;

	for (strLen = 0; str[strLen] != '\0'; strLen++)
	{

	}
	if (strLen % 2 == 0)
	{
		for (i = (strLen / 2); str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else	/*(strLen % 2 != 0)*/
	{
		for (n = ((strLen + 1) / 2); str[n] != '\0'; n++)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}
