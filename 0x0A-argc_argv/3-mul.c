#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: count the arguments passed into it
 * @argv: prints the arguments passed into it
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;
	int mul = 1;


	if (argc < 3)
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
				mul = mul * atoi(argv[i]);
			}
		}
			printf("%d\n", mul);
	}
			return (0);
}
