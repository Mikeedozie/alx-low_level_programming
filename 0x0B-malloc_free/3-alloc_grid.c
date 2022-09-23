#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - prints a grid of integers
 * @width: width of the grid
 * @height: height of the grid
 * Return: Nothing.
 */

int **alloc_grid(int width, int height)
{
	int i, **ptr, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = (int **)malloc(width * sizeof(int *));

	if (ptr == NULL)
	{
		return (NULL);
		free(ptr);
	}

	for (i = 0; i < width; i++)
	{
		ptr[i] = (int *)malloc(height * sizeof(int));

		if (ptr[i] == NULL)
		{
			free(ptr);

			for (j = 0; j < i; j++)
				free(ptr[j]);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	}
	return (ptr);
	
}
