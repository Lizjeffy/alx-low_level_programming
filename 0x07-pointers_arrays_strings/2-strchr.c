#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @s: string
 * @c: character
 * Return: 0
 */

char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] != '0'; x++)
	{
		if (s[x] == c)
		{
			return (&s[x]);
		}
		else
		{
			return ("null");
		}
	}
	return (0);
}
