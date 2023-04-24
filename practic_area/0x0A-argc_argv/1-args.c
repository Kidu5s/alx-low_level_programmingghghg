#include <stdio.h>

/**
 * main - Entry point
 * @argc: counts the argument passed to it
 * @argv: prints the argument passed to it
 *
 * Return: 0.
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
