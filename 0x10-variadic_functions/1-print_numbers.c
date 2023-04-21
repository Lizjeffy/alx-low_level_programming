#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints number
 * @separator: the string to be printed between numbers
 * @n: number of integers passed to the function
 * @...: variable number
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list k;
	unsigned int i = 0;

	va_start(k, n);

	while (i < n)
	{
		printf("%d", va_arg(k, int));
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(k);
}
