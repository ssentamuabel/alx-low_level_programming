#include "main.h"
/**
 *  free_grid - free 2D array
 *  @grid: the pointer to array
 *  @height: the rows in the array
 *
 *  Return: void
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
