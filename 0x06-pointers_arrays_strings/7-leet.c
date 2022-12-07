#include "main.h"

/**
* leet - encodes a string into 1337.
* @s: string to encode.
* Return: the encoded string.
*/

char *leet(char *str)
{
	int i = 0, j = 0;
	char num[] = {'4', '3', '1', '0', '7'};
	char CC[] = {'A', 'E', 'L', 'O', 'T'};
	char cc[] = {'a', 'e', 'l', 'o', 't'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == CC[j] || str[i] == cc[j])
				str[i] = num[j];
		}
	}
	return (str);
}
