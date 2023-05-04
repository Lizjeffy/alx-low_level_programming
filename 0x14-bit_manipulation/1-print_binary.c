#include "main.h"

/**
 * print_binary - convert decimal number to binary number
 * @n: number to be converted
 */

void print_binary(unsigned long int n)
{
	int x, c;
	unsigned long int cu;

	x = 63, c = 0;

	while (x >= 0)
	{
		cu = n >> x;
		if (cu & 1)
		{
			_putchar('1');
			c++;
		}
		else if (c)
			_putchar('0');
	}
	x--;
	if (!c)
		_putchar('0');
}
