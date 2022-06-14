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
	int n;
	
	n = strlen(str) / 2;
	
	puts(n);
}
