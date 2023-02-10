#include "main.h"
#include <limits.h>

int main(void)
{
	char *c;

	c = malloc_checked(sizeof(char) * 1024);
	free(c);
	return (0);
}
