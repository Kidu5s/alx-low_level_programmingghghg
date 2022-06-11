#include <stdio.h>

/**
 * main - replace the number with words
 *
 * Return: always 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 5 == 0)
		{
			if (i % 10 == 0 && i % 100 == 0)
			{
				printf("Buzz");
			}
			else
				printf("Buzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
			printf("\n");
		return (0);
}
