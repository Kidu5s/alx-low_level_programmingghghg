#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 *
 */
int main(void)
{
	char a;

a = 0;
	while (a <= 9)
	{
		putchar(a);
		++a;
	}
a = 'a';
	while (a <= 'f')
	{
		putchar(a);
		++a;
	}
		putchar('\n');
	return (0);
}
