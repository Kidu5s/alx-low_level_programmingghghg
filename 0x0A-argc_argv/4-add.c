#include <stdio.h>
#include "main.h"
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
		if (_isnumber(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}

/**
 * _isnumber - check if it is a nubmer or not
 * @arg: a string to be checked
 * 
 * Return: 1 if not number
 * 0 if number
 */
int _isnumber(char *arg)
{
	int i;

	for (i = 0; arg[i]; i++)
	{
		if (arg[i] < '0' || arg[i] > '9')
			return (1);
	}
	return (0);
}
