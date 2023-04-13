#include "main.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: pointer to the newly created array or NULL
 */

int *array_range(int min, int max)
{
	int *s;
	int x;

	if (min > max)
	{
		return (NULL);
	}
	s = (int *)malloc((max - min + 1) * sizeof(int));
	if (s == NULL)
	{
		return (NULL);
	}
	for (x = min; x <= max; x++)
	{
		s[x - min] = x;
	}
	return (s);
}
