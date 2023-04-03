#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: substring
 * Returns: n
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n;
	unsigned int x;

	for (n = 0; s[n] != '\0'; n++)
	{
		for (x = 0; accept[x] != '\0'; x++)
		{
			if (*s == accept[x])
			{
				break;
			}
			else if (accept[x] == '\0')
				return (n);
		}
		n++;
	}
	return (n);
}
