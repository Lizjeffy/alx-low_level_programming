#include "main.h"
#include <stdlib.h>

/**
 * **strtow - splits a string into words
 * @str: string to split
 * Return: pointer to an array of strings or NULL
 */

char **strtow(char *str)
{
	char **matrix;
	char *tmp;
	int x, y, len, words, a, start, end;

	y = 0;
	len = 0;
	a = 0;

	while (*(str + len))
	{
		len++;
	}
	words = count_word(str);
	if (words == 0)
	{
		return (NULL);
	}
	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
	{
		return (NULL);
	}
	for (x = 0; x <= len; x++)
	{
		if (str[x] == "" || str[x] == '\0')
		{
			if (a)
			{
				end = x;
				tmp = (char *)malloc(sizeof(char) * (a + 1);
				if (tmp == NULL)
				{
					return (NULL);
				}
				while (start < end)
				*tmp++ = str[start++];
				*tmp = '\0';
				matrix[y] = tmp - a;
				y++;
				a = 0;
			}
		}
		else if (a++ == 0)
		{
			start = x;
		}
	}
	matrix[y] = NULL;

	return (matrix);
}
