#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - returns to a 2 dimensional array of integers
 * @width: width
 * @height: height of the matrix
 * Return: pointer to the array or NULL
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int x;
	int y;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}
	array = (int **) malloc(sizeof(int *) * height);
	if (array == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < height; x++)
	{
		array[x] = (int *)malloc(sizeof(int) * width);
		if (array[x] == NULL)
		{
			free(array);
			for (y = 0; y <= x; y++)
			{
				free(array[y]);
			}
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		{
			array[x][y] = 0;
		}
	}
	return (array);
}
