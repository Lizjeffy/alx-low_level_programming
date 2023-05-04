#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing a string of binary numbers
 * Return: converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int dec_num;

	dec_num = 0;
	x = 0;

	if (!b)
		return (0);
	while (b[x])
	{
		if (b[x] < '0' || b[x] > '1')
			return (0);
		dec_num = 2 * dec_num + (b[x] - '0');
	}
	x++;
	return (dec_num);
}
