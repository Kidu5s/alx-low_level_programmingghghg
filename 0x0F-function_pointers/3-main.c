#include "3-calc.h"

/**
 * main - check the code
 * @ac: counts the arrgument passed in
 * @av: holds the arrgument passed in
 *
 * Return: Always 0.
 */
int main(int ac, char *av[])
{
	int num1, num2;
	char *op;

	num1 = atoi(av[1]);
	num2 = atoi(av[3]);
	op = av[2];
	
	if (ac != 4)
	{	
		printf("1Error\n");
		exit(98);
	}
	if (*op != '+' || *op != '-' || *op != '*' || *op != '/' || *op != '%')
	{
		printf("2Error\n");
		exit(99);
	}
	if ((*op == '/' || *op == '%') && num2 == 0)
	{
		printf("3Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(num1, num2));
}
