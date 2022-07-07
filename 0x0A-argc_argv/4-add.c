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

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if ((*argv[i] >= 'a' && *argv[i] <= 'z') || (*argv[i] >= 'A' && *argv[i] <= 'Z'))
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
