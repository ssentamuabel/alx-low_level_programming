#include<stdlib.h>
/**
 *  free_grid - free memory
 *
 *  @grid: the memory address
 *  @height: the number of rows
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
