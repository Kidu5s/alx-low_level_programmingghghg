#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Succuss)
 *
 */
int main(void)
{
	char Aa;

Aa = 'z';
	while (Aa >= 'a')
	{
		putchar(Aa);
		--Aa;
	}
		putchar('\n');
	return (0);
}
