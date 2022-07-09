#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
* minCoins - multiplies two numbers
* @argc: the number of passed arguments
* @argv: an array of passsed arguments
*
* Return: 0 on success, 1 on error
*/
int minCoins(int coins[], int m, long cents)
{
	int i;
	int res = INT_MAX;
	if (cents == 0)
		return (0);

	for (i = 0; i < m; i++)
	{
		if (coins[i] <= cents)
		{
			int sub_res = minCoins(coins, m, cents - coins[i]);
			
			if ((sub_res != INT_MAX) && ((sub_res + 1) < res))
				res = sub_res + 1;
		}
	}
	return (res);
}

/**
* main - multiplies two numbers
* @argc: the number of passed arguments
* @argv: an array of passsed arguments
*
* Return: 0 on success, 1 on error
*/
int main(int argc, char  **argv)
{
	long cents;
	int coins[] = {25, 10, 5, 2, 1};
	int m = sizeof(coins)/sizeof(coins[0]);
	
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
		printf("0");
	else
		printf("%d\n", minCoins(coins, m, cents));
	return (0);
}
