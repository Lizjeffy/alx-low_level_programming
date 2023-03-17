#include <stdio.h>

/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	char x;

	for (x = 'a' ; x <= 'z' && x != 'q' && x != 'e' ; x++)
			putchar(x);
	putchar('\n');
	return (0);
}
