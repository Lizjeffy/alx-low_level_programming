#include "main.h"
#include <stdlib.h>

/**
 * main - prints the number of arguments passed
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int product;
	int x;

	for (x = 1; x < argc; x++)

	product = atoi(argv[1]) * atoi(argv[2]);

	{
		if (argc < 3)
		{
			printf("Error\n");
		}
		return (1);
	}
	printf("%d\n", product);
	return (0);
}
