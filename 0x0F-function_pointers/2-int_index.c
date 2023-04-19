#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array
 * @size: size of elements in an array
 * @cmp: pointer
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int k = 0;

	if (array == NULL || size <= 0 || cmp == NULL)
			return (-1);
	while (k < size)
	{
		if (cmp(array[k]))
			return (k);
		k++;
	}
	return (-1);
}
