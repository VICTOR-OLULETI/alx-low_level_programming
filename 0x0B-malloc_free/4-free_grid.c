#include "main.h"
#include <stdio.h>

/**
 * free_grid - frees a 2 dimensional grid previously created by alloc_grid
 *
 * @grid: two dimensional array
 * @height: height of array
 *
 * Return: void.
 */

void free_grid(int **grid, int height)
{
	int h;

	for (h = 0; h < height - 1; h++)
		free(grid[h]);
	free(grid);
}
