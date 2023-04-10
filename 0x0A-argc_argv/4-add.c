#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * main - prints the number of arguments passed
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int x, y, z;

	if (argv == NULL)
	{
		printf("0\n");
	}
	for (x = 1; x < argc; x++)
	{
		for (y = 0; y < (int) strlen(argv[x]); y++)
		{
			if (argv[x][y] >= 'a' && argv[x][y] <= 'z')
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	for (z = 1; z < argc; z++)
	{
		sum = sum + atoi(argv[z]);
	}
	printf("%d\n", sum);
	return (0);
}
