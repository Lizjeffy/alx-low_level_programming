#include "main.h"

/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: number
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 1)
		return (-1);
	else if (n == 1)
		return (1);
	else
		return(_sqrt_recursion(n));
}
