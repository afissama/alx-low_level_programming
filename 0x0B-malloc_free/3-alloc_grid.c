#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - alloc memo for grid
 *
 * @width: int
 * @height: int
 * Return: int**
 */
int **alloc_grid(int width, int height)
{
	int **_grid;
	int i, j;

	if ((width > 0) && (height > 0))
	{
		_grid = (int **)malloc(height * (sizeof(int *)));
		if (_grid != NULL)
		{
			for (i = 0; i < height; i++)
			{
				_grid[i] = (int *)malloc(width * sizeof(int));
				if (_grid[i] == NULL)
				{
					return (NULL);
				}

				for (j = 0; j < width; j++)
				{
					_grid[i][j] = 0;
				}
			}
			return (_grid);
		}

	}
	return (NULL);
}
