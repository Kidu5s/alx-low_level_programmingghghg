#ifndef main
#define main

#include "main.h"

#endif

/**
 * print_alphabet_x10 - prints 10 times
 *
 * Return: always 0.
 */
void print_alphabet_x10(void)
{
	char az;
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		for (az = 'a'; az <= 'z'; az++)
		{
			_putchar(az);
		}
		_putchar('\n');
	}
	return;
}
