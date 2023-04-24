#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* _isnumber - adds numbers
* @s: char to be checked
*
* Return: 0 on success, 1 on error
*/
int _isnumber(char *s)
{
	int i, check, d;

	i = 0, d = 0, check = 1;

	if (*s == '-')
		i++;
	for (; *(s + i) != 0; i++)
	{
		d = isdigit(*(s + i));
		if (d == 0)
		{
			check = 0;
			break;
		}
	}
	return (check);
}

/**
* main - Entry point
* @argc: counts the argument
* @argv: print the argument
*
* Return: always 0.
*/
int main(int argc, char *argv[])
{
	int i, n, ex;

	ex = 0, n = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (_isnumber(argv[i]))
				n += atoi(argv[i]);
			else
				ex = 1;
		}
	}
	if (ex == 0)
		printf("%i\n", n);
	else
		printf("%s\n", "Error");
	return (ex);
}
