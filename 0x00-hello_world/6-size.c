#include <stdio.h>

/* main is Entry poitn */
int main(void)
{
	sizeof(char);
	sizeof(int);
	sizeof(long int);
	sizeof(long long int);
	sizeof(float);

	{
		printf("Size of a char: %d byte(s)\n", sizeof(char));
		printf("Size of an int: %d byte(s)\n", sizeof(int));
		printf("Size of a long int: %d byte(s)\n", sizeof(long int));
		printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
		printf("Size of a float: %d byte(s)\n", sizeof(float));
	}
	return (0);
}
