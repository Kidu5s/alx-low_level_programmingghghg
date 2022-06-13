#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
	srand(time(0));
	char pass;
	char data = "abcdefghijklmnopqrstuvwxyz"
			"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
			"0123456789"
			"`~!@#$%^&*()-_=+\|{[}];:/.,?";
	int i;

	for (i = 1; i <= 12; i++)
	{
		pass = pass + data[rand() % 93];
	}
		printf("Your password: ", pass);
		return (0);
}
