#include <stdio.h>
/**
* main - Entry point
*
* Return: 0 (Success)
*/
int main(void)
{
	int i;
	char a[59] = {'a', 'n', 'd', ' ', 't', 'h', 'a', 't',
		 ' ', 'p', 'i', 'e', 'c', 'e', ' ', 'o', 'f',
		 ' ', 'a', 'r', 't', ' ', 'i', 's', ' ', 'u',
		 's', 'e', 'f', 'u', 'l', '"', ' ', '-', ' ',
		 'D', 'o', 'r', 'a', ' ', 'K', 'o', 'r', 'p',
		 'a', 'r', ',', ' ', '2', '0', '1', '5', '-',
		 '1', '0', '-', '1', '9'};

	for (i = 0; i <= 58; i++)
	{
		putchar(a[i]);
	}
		putchar('\n');

	return (1);
}
