#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - revers the string
 * @s: pointer to char
 * 
 * Return: nothing
 */
void rev_string(char *s)
{
	int length;
	int i;
	int j;
	int tmp;

	length = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		length += 1;
	}

	for (j = 0; j < (length / 2); j++)
	{
		tmp = s[j];
		s[j] = s[length - j - 1];
		s[length - j - 1] = tmp;
	}
}
