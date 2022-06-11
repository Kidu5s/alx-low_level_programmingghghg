#include <stdio.h>

/**
 * main - prints the largest prime factor
 *
 * Return: 0
 */

int main(void)
{
	long int i;
	 long int q;

	i = 612852475143;
	
      for (q = 2; q >= 2; q++)
	      if (i % q == 0)
	printf("%ld", i % q);
      	printf("\n");
return (0);
}

