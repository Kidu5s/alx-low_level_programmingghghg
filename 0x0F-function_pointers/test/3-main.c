#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - main
* @argc:
* @argv:
*
* Return:
*/
int main(int argc, char *argv[])
{
	int num1, num2;
	char operator;

	num1 = atoi(argv[1]);
	operator = *argv[2];
	num2 = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (operator != ('+' || '-' || '*' || '/' || '%'))
	{
		printf("Error\n");
		exit(99);
	}
	if (operator == ('/' || '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d", get_op_func(operator)(num1, num2));
}
