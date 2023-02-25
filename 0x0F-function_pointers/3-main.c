#include "3-calc.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int ac, char *av[])
{
	int num1, num2, result;
	char *operator;

	num1 = atoi(av[1]);
	num2 = atoi(av[3]);
	operator = av[2];
	if (ac == 1 || ac > 4)
	{
		printf("Error\n");
		exit(98);
	}
	/*
	if (operator != "+" || operator != "-" || operator != "*" || operator != "/" || operator != "%")
	{
		printf("Error\n");
		exit(99);
	}
	if ((operator == "%" || operator == "/") && num2 == 0)
	{
		printf("Error\n");
		exit(100);
		*/
	result = get_op_func(operator)(num1, num2);
	printf("%d\n", result);
	return (0);
}
