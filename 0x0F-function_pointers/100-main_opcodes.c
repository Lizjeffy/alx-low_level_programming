#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int b;
	int k = 0;
	char *a;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	b = atoi(argv[1]);
	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}
	a = (char *)main;
	while (k < b)
	{
		if (k == b - 1)
		{
			printf("%02hhx\n", a[k]);
			break;
		}
		k++;
		printf("%02hhx ", a[k]);
	}
	return (0);
}
