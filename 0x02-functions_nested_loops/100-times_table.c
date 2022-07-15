#include "main.h"
/**
*
*  * print_times_table - print the n times table
*
*   * @n: the times
*
*    *
*
*     * Return: void
*
*      */

void print_times_table(int n)

{

int i;

int j;

int k;



if (n < 15 && n > 0)

{

for (i = 0; i <= n; i++)

{

for (j = 0; j <= n; j++)

{

k = i * j;

if (j != 0)

{

_putchar(',');

_putchar(' ');

}

if (k <= 9)

{

_putchar(' ');

_putchar(' ');

_putchar(k + '0');


