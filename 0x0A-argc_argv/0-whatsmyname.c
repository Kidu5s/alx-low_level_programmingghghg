#include <stdio.h>

/**
 * main - prints the name of the command given
 * @argc: count the command put in
 * @argv: prints the command/arguments put in
 *
 * Return: 0.
 */
int main(__attribute((unused))int argc, char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
