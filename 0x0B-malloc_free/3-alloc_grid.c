#include "main.h"
/**
 *  alloc_grid - allocating memory for a 2D array
 *  @width: the columns
 *  @height: the rows
 *
 *  Return: pointer to the array
 */
int **alloc_grid(int width, int height)
{
	int  **ptr;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);
	/* pointer to row pointers */
	ptr = (int **)malloc(sizeof(int *) * height);
	if (ptr == NULL)
		return (NULL);

	/*  Reserve memory for columns */
	for (i = 0; i < height; i++)
	{
		ptr[i] = (int *)malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
		{
			while (i >= 0)
			{
				free(ptr[i]);
				i--;
			}
			free(ptr);

			return (NULL);
		}
	}

	/* placing the 0 in the array */
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	}

	return (ptr);
}
