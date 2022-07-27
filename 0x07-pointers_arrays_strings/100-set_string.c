#include "main.h"

/**
 * set_string - set the value of a pointer to char
 * @s: a pointer that holds the address of a pointer to char
 * @to: a pointer to char
 *
 * Return: Nothing
 */
void set_string(char **s, char *to)
{
	/**
	 * replace the value of s (address of a pointer)
	 * with the value of to (address of a char)
	 */
	*s = to;
}
