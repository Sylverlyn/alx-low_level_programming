#include "main.h"
#include <stdlib.h>

/**
 * free_grid -  this frees up a 2d array grid
 * @grid: a double pointer 2d grid
 * @height: the height of grid
 * Return: nothing
*/

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		while (height >= 0)
		{
			free(grid[height]);
			height--;
		}
		free(grid);
	}
}
