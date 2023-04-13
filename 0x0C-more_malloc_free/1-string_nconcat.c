#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer pointing to a newly allocated space or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x, y, z;
	char *s3;

	if (s1 == NULL)
	{
		x = 0;
	}
	else
	{
		for (x = 0; s1[x] != '\0'; x++)
			;
	}
	if (s2 == NULL)
	{
		y = 0;
	}
	else
	{
		for (y = 0; s2[y] != '\0'; y++)
			;
	}

	if (y > n)
		y = n;

	s3 = malloc((x + y + 1) * sizeof(char));

	if (s3 == NULL)
	{
		return (NULL);
	}
	for (z = 0; z < x; z++)
	{
		s3[z] = s1[z];
	}
	for (z = 0; z < y; z++)
	{
		s3[z + x] = s2[z];
	}
	s3[x + y] = '\0';
	return (s3);
}
