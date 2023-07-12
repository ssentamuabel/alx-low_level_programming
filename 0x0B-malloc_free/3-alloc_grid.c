#include<stdlib.h>
/**
 *  alloc_grid - to make a grid
 *  @width: the rows of the grid
 *  @height: the columns of the  grid
 *
 *  Return: address
 */
int **alloc_grid(int width, int height)
{
	int **new = 0;
	int i, j;

	/* check for null value */
	if ((width < 1) || (height < 1))
		return (NULL);
	/*reserve memory for pointers  pointing to pointers*/
	new = (int **)malloc(height * sizeof(int *));
	if (new == NULL)
		return (NULL);
	/* reserve space for the pointers to values */
	for (i = 0; i < height; i++)
		new[i] = (int *)malloc(width * sizeof(int *));
	/* Assigning values to the address */
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			new[i][j] = 0;
		}
	}
	return (new);
}
