#include "main.h"

/**
 * *_strstr - that locates a substring
 * @haystack: string
 * @needle: substring
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	int needleLen = strlen(needle);
	char *a1 = haystack;
	char *a2 = needle;

	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack != '\0')
	{
		while (*haystack != *needle && *haystack != '\0')
		{
			haystack++;
		}
	}
	while (*a1 == *a2 && *a2 != '\0')
	{
		a1++;
		a2++;
	}
	if (a2 - needle == needleLen)
	{
		return (haystack);
	}
	haystack++;
	return (NULL);
}
