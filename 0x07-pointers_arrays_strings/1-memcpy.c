#include "main.h"

char *_memcpy(char *dest, char *str, unsigned int n)
{
	unsigned int i;

	for (i = 0; str[i] != '\0'; i++)
		dest[i] = str[i];
	return (dest);
}
