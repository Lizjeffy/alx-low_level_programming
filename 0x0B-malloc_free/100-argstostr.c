#include "main.h"
#include <stdlib.h>

/**
 * *argstostr - concatenates all arguments of my program
 * @ac: number of arguments
 * @av: array of arguments
 * Return: a pointer to a new string or NULL
 */

char *argstostr(int ac, char **av)
{
	int x;
	int y;
	int z;
	int len;
	char *str;

	z = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
		{
			len++;
		}
		len++;
	}
	str = malloc(sizeof(char) * (len));
	if (str == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
		{
			str[z] = av[x][y];
			z++;
		}
		str[z] = '\n';
		z++;
	}
	return (str);
}
