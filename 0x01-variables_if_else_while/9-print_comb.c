#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int num_with_comma;

num_with_comma = '0';
	while (num_with_comma <= '9')
{
		putchar(num_with_comma);
		if (num_with_comma != '9')
		{
		putchar(',');
		putchar(' ');
		}
		num_with_comma++;
}
		putchar('\n');
	return (0);
}
