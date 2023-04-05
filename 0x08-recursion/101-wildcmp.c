#include "main.h"

/**
 * wildcmp - check for two identical strings
 * @s1: first string
 * @s2: second string
 * Return: 1 if identical, otherwise 0.
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s2 == '*' && wildcmp(s1, s2 + 1) == 1)
	{
		return (1);
	}
	if (*s1 != '\0' && wildcmp(s1 + 1, s2) == 1)
	{
		return (1);
	}
	return (0);
	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
