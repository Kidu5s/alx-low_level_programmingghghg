#include <stdio.h>

int main(void)
{
	int i;

	for (i = 0; i > -100; i++)
	{
		if (i > -9)
			printf("%d, ", i);
	}
	

	putchar('\n');
	return (0);
}
