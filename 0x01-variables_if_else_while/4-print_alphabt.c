#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Succes)
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; ++alpha)
	{
		if (alpha == 'e' || alpha == 'q')
		{
			continue;
		}
		else
			putchar(alpha);
	}
			putchar('\n');
	return (0);

}
