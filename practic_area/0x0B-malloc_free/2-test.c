#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s;

    s = str_concat("Betty ", "Holberton");
    if (s == NULL)
    {
        printf("failed\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}

/**
 * str_concat - concatnates two strings 
 * @s1: the first string
 * @s2: the second string
 *
 * Return: NULL on failure
 * On succuss return pointer to memory
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;

	int i;
	int j;
	int k;
	
	if (s1 != NULL)
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			;/*incremnt i */
		}
	}
	if (s2 != NULL)
	{
		for (j = 0; s2[j] != '\0'; j++)
		{
			;/* increment j */
		}
	}
	ptr = malloc(sizeof(char) * (i + j + 1));
	
	if (ptr == NULL)
		return (NULL);

	for (k = 0; k < i ; k++)
	{
		ptr[k] = s1[k]; /*assign the value of s1 to the allocated memory*/
	}
	for (k = 0; k < i + j; k++)
	{
		ptr[k] = s2[k - 1]; /*assign the value of s2 t the allocated memory place */
	}
	ptr[k] = '\0';
	return (ptr);
}
