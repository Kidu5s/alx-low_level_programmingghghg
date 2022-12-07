#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: a pointer to char
 * Return: a pointer to the string
 */
char *cap_string(char *str)
{
	int i;
	int j;
	char sep_word[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'}

	for (i = 0; str[i]; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (str[i] == sep_word[j] && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
				str[i] -= ' ';
		}
	}
	return (str);
}
