#include "3-calc.h"

/**
 * get_op_fucntion - function pointers
 * @s: the operator passed as argument to the program
 *
 * Return: a pointer to the function that corresponds to the operator given as a parameter
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 6)
	{
		if(s[i] != ops->op[i])
			return (NULL);

		i++;
	}
	return (0);
}
