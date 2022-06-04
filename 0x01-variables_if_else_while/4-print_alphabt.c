#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Succes)
 */
int main(void)
{
	char except_the_two;

	except_the_two = 'a';
	while (except_the_two <= 'z')
	{	
		putchar(except_the_two);
		++except_the_two;
		if (except_the_two == 'q')
		{
			continue;
		}
		else if (except_the_two == 'e')
		{
			continue;
		}
	}
		putchar('\n');
	return (0);
}
