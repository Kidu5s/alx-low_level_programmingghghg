#include <stdio.h>

/**
* main - computes and prints the sum of all the multiples of
*
* Return: Nothing.
*/
int main(void)
{
	int x, result;

	for (x = 0; x < 1024; x++)
	if (x % 3 == 0 || x % 5 == 0)
	result += x;
	printf("%d\n", result);
	return (0);
}
