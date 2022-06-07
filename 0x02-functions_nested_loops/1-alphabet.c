#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char alphaLower;

	alphaLower = 'a';
	while (alphaLower <= 'z')
	{
		_putchar(alphaLower);
		alphaLower++;
	}
	_putchar('\n');
}
