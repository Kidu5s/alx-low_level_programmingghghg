#ifndef main
#define main

#include "main.h"

#endif

/**
 * main - Entry point
 *
 * Return: always 0.
 */
int main(void)
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
	return (0);
}
