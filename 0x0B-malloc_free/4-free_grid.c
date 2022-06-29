#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - free allocated space
 *
 * @grid: int**
 * @height: int
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
