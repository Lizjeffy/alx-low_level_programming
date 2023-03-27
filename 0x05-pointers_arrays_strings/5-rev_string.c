#include "main.h"

/**
 * rev_string - print a string then reverse it
 * @s: string to be printed
 * Return: always 0
 */

void rev_string(char *s)
{
	int i;
	int a;

	char revstr[9000];
	int length = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		s[i] = revstr[i];
		length++;
	}
	for (a = length - 1 ; a >= 0 ; a--)
	{
		revstr[a] = s[a];
	}
}
