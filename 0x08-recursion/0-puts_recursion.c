#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: string
 */

void _puts_recursion(char *s)
{
	int a = 0;

	if (s[a] == '\0')
		_putchar('\n');
	else
	{
		_putchar(s[a]);
		_puts_recursion(++s);
	}
}
