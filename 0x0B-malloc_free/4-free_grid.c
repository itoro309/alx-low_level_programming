#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free up a 2nd grid
 * @grid: double pointer 2nd grid
 * @height: height of grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
