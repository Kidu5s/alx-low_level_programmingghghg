#include "main.h"

/**
 * rot13 - Replaces the first 13 characters with the other
 * str: a pointer to the address of first character
 *
 * Return: A pointer to char
 */
char *rot13(char *str)
{
	int i;
	int j;
	char aA_zZ[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
		'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
		'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
		'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	char nN_zZ[] = {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
		'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z',
		'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
		'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 53; j++)
		{
			if (str[i] == aA_zZ[j])
			{
				str[i] = nN_zZ[j];
				break;
			}
		}
	}
	return (str);
}
