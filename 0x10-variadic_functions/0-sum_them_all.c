#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number
 * @...: variable number
 * Return: sum or 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list a;
	unsigned int x = 0;
	unsigned int sum = 0;

	va_start(a, n);

	while (x < n)
	{
		sum = sum + va_arg(a, int);
		x++;
	}
	va_end(a);
	return (sum);
}
