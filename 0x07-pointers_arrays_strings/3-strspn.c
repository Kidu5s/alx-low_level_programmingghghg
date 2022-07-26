#include "main.h"

/**
 * _strspn - gets the length of prefix
 * @s: pointer
 * @accept: pointer
 * Return: the num of byte
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int len = 0;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (accept[i] == s[j])
			{
				len++;
			}
			if (s[j + 1] < 'A' || s[j + 1] > 'Z')
			{
				if (s[j + 1] < 'a' || s[j + 1] > 'z')
				{
					break;
				}
			}
		}
	}
	return (len);
}
