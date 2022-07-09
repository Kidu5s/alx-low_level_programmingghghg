#include "main.h"

/**
* str_len - count the length of the string
* @sl: input string
*
* Return: the length of the string
*/
int str_len(char *sl)
{
	if (*sl == '\0')
		return (0);
	return (1 + str_len(sl + 1));
}

/**
* is_pal - checks if the string is palindrom or not
* @str: the stirng
* @f: first character of the string
* @l: last character of the string
*
* Return: 1 if palindrom 0 if not
*/
int is_pal(char *str, int f, int l)
{
	if (f == l)
		return (1);
	if (str[f] != str[l])
		return (0);
	if (f < l + 1)
		return (is_pal(str, f + 1, l - 1));
	return (1);
}

/**
* is_palindrome - palindrom checker
* @s: input string
*
* Return: 1 if palindrom 0 if not
*/
int is_palindrome(char *s)
{
	int len = str_len(s);

	if (len == 0)
		return (1);
	return (is_pal(s, 0, len - 1));
}

