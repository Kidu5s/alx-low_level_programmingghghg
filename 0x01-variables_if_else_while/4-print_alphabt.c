#include <stdio.h>

/**
 *
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char except;

	except = 'a';
	while (except <= 'z')
	{
		if (except == 'q')
		{
			continue;
		}
		else if (except == 'e')
		{
			continue;
		}
		putchar(except);
	}
		putchar('\n');
	return (0);
}
