#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *alloc_grid - returns a pointer to a 2 dimensional array
 *of integers.
 *@width: width array
 *@height: height array.
 *Return: 0.
 */

int **alloc_grid(int width, int height)
{
	int **square;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);

	square = malloc(height * sizeof(int *));
	if (square == NULL)
	{
		free(square);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		square[i] = malloc(width * sizeof(int));
		if (square[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(square[i]);
			free(square);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			square[i][j] = 0;

	return (square);
}
