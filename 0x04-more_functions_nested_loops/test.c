#include <stdio.h>

int main(void)
{
	int x;
	int y;

	for (x = 0; x < 10; x++)
	{
		for(y = 0; y <= 9; y++)
		{
			putchar('0' + y);
			if (x == 1 && y <= 4)
			{
				putchar(x + '0');
				putchar(y + '0');
			}
		}
			putchar('\n');
	}
			putchar('\n');
		return (0);
}
