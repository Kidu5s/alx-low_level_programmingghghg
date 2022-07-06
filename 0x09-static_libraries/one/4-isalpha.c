#include "main.h"

/**
 * _isalpha - prints the checks the lower or upper
 * @c: the cahracter to print
 *
 * Return: 1 if true 0 if false
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
		return (0);
}
