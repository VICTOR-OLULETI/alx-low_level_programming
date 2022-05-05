#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers
 *
 * @width: width of the array
 * @height: height of the array
 *
 * Return: either return a pointer or NULL
 */

int **alloc_grid(int width, int height)
{
	int w;
	int h;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int) * height);
	if (!grid)
	{
		return (NULL);
	}
	h = 0;
	while (h < height)
	{
		grid[h] = malloc(sizeof(int) * width);

		w = 0;
		if (grid[h] == NULL)
		{
			for(; h >= 0; h--)
			{
				free(grid[h]);
			}
			free(grid);
			return (NULL);
		}
		while (w < width)
		{
			grid[h][w] = 0;
			w++;
		}
	}
	return (grid);
}
