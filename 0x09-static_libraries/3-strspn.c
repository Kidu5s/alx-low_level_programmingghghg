#include "main.h"
#include <string.h>

/**
 * _strspn - gets the length of prefix
 * @s: pointer
 * @accept: pointer
 * Return: the num of byte
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
