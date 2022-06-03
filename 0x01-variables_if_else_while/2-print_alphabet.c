#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char az;

az = 'a';
	while (az <= 'z')
	{
		putchar(az);
		az++;
		putchar('\n');
	}
	return (0);
}
