#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the summ of  numbers passed in
 * @argc: The nubmer of argument passed in
 * @argv: The argumets passed in
 *
 * Return: 0. on Success 1 on Error
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (!(atoi(argv[i])))
		{
			printf("Error\n");
			return (1);
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
