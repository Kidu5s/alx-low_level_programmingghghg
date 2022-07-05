#include <stdio.h>

/**
 * main - prints the name of the command given
 * @argc: count the command put in
 * @argv: prints the command/arguments put in
 *
 * Return: 0.
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
