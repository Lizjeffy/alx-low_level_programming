#include "main.h"

/**
 * flip_bits - returns the number of bits needed to flip to get from one number to another
 * @n: first number of bits
 * @m: second number of bits
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x = 63;
	int num = 0;
	unsigned long int cu;
	unsigned long int e;

	e = n ^ m;

	while (x >= 0)
	{
		cu = e >> x;
		if (cu & 1)
			num++;
	}
	x--;
	return (num);
}
