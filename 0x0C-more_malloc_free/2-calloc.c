#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *_calloc - allocates memory for an array using malloc
 * @nmemb: array
 * @size: size of bytes
 * Return: a pointer to the allocated memory or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	s = malloc(nmemb * size);
	if (s == NULL)
	{
		return (NULL);
	}
	memset(s, 0, nmemb * size);
	return (s);
}
