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
	int **g;

	if (width <= 0 || height <= 0)
		return (NULL);

	g = malloc(sizeof(int) * height);
	if (!g)
	{
		return (NULL);
	}
	for (h = 0; h < height; h++)
	{
		g[h] = malloc(sizeof(int) * width);

		if (g[h] == NULL)
		{
			while (h--)
				free(g[h]);
			free(g);
			return (NULL);
		}
		for (w = 0; w <= width; w++)
		{
			g[h][w] = 0;
			w++;
		}
	}
	return (g);
}
