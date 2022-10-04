#include "main.h"
#include <stdlib.h>

/**
 * free_grid -  frees the 2 dimensional grid previously
 * created the alloc_grid function.
 * @grid: pointer to the grid
 * @height: height of the grid
 *
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}