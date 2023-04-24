#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make
 * change for an amount of money
 * @argc: count the nubmer of arguments passed in
 * @argv: holds all teh argument passed in
 * Return: 0 on Success
 * 1 on Error.
 */
int main(int argc, char *argv[])
{
	int i, j, k, l, m;

	if (argc == 2)
	{
		for (argc = 1; argv[argc]; argc++)
		{
			i = atoi(argv[argc]);
			m = i / 25 + i % 25 / 10 + i % 25 % 10 / 5
				+ i % 25 % 10 % 5 / 2 + i % 25 % 10 % 5 % 2;
			l = i / 10 + i % 10 / 5 + i % 10 % 5 / 2 + i % 10 % 5 % 2;
			k = i / 5 + i % 5 / 2 + i % 5 % 2;
			j = i / 2 + i % 2;
			if (i < 0)
				printf("0\n");
			else if (i >= 1 && i < 2)
				printf("%d\n", i);
			else if (i >= 2 && i < 5)
			{
				if (i % 2 == 0)
					printf("%d\n", i / 2);
				else
					printf("%d\n", j);
			}
			else if (i >= 5 && i < 10)
			{
				if (i % 5 == 0)
					printf("%d\n", i / 5);
				else
					printf("%d\n", k);
			}
			else if (i >= 10 && i < 25)
			{
				if (i % 10 == 0)
					printf("%d\n", i / 10);
				else
					printf("%d\n", l);
			}
			else
			{
				if (i % 25 == 0)
					printf("%d\n", i / 25);
				else
					printf("%d\n", m);
			}
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
