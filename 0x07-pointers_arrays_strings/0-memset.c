#include "main.h"

/**
 * *_memset - function that fills memory with a constant byte
 * @s: memory area
 * @b: the constant byte
 * @n: number of bytes
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; n > x; x++)
		s[x] = b;
	return (s);
}

