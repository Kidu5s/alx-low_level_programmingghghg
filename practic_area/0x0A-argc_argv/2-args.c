#include <stdio.h>

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

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
