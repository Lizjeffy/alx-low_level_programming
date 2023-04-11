#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *_strdup - duplicate
 * @str: character
 * Return: a pointer to the duplicated string or NULL
 */

char *_strdup(char *str)
{
	char *d;
	int x;
	int len;

	if (str == NULL)
		return (NULL);
	for (x = 0; str[x] != '\0'; x++)
	d = malloc(sizeof(char) * (x + 1));
	{
		if (d == NULL)
			return (NULL);
	}
	for (len = 0; str[len]; len++)
		d[len] = str[len];
	return (d);
}
