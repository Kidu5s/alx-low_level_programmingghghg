#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: counts the argument
 * @argv: print the argument
 *
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (arg > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if ((*argv[i] >= 'a' && *argv[i] <= 'z'))
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += atoi(argv[i]);
			}
		}
			printf("%d\n", sum);
	}
	return (0);
}
