#include "main.h"

/**
 * rev_string - print a string then reverse it
 * @s: string to be printed
 * Return: always 0
 */

void rev_string(char *s)
{
	int i;
	int length = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		_putchar(s[i]);
		length++;
	}

	_putchar('\n');
	for (i = length ; i >= 0 ; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
