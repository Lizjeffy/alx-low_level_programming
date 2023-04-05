#include "main.h"
#include <string.h>
/**
 * is_palindrome - that check for palindrome
 * @s: string
 * Return: 1 if string is a palindrome, otherwise 0
 */

int is_palindrome(char *s)
{
	size_t len = strlen(s);

	if (len <= 0)
	{
		return (1);
	}
	else if (s[0] != s[len - 1])
	{
		return (is_palindrome(s + 1));
	}
	return (1);
}
