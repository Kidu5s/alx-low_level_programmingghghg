#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: the string to be printed between numbers
 * @n: the numbers of integers passed in
 *
 * Return: Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (separator == NULL || i == n - 1)
			separator = "";
		printf("%d%s", va_arg(ap, int), separator);
	}
	va_end(ap);
	printf("\n");
}
