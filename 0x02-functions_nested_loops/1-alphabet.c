#include "main.h"

/**
 * print_alphabet - Prints all alphabet
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char alphaLower;

	alphaLower = 'a';
	while (alphaLower <= 'z')
	{
		_putchar(alphaLower);
		alphaLower++;
	}
		_putchar('\n');
	return;
}
