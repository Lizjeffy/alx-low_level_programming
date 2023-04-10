#include "main.h"

/**
 * *_strstr - that locates a substring
 * @haystack: string
 * @needle: substring
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	char *a1 = haystack;
	char *a2 = needle;

	for (; *haystack != '\0'; haystack++)
	{
		while (*a1 == *a2 && *a2 != '\0')
		{
			a1++;
			a2++;
		}
		if (*a2 == '\0')
			return (haystack);
	}
	return (0);
}
