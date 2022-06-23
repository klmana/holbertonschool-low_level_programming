#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * free_grid - frees the memory allocate for the grid
 *
 * @grid: grid to free
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
	int i;

	free(grid);
	for (i = 0; i < height; i = i + 1)
		free(grid[i]);
}
