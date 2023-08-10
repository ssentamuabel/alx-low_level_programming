#include "main.h"
/**
 *  array_range - array of range
 *  @min: the minimum value
 *  @max: the maximum value
 *
 *  Return: int
 */
int *array_range(int min, int max)
{
	int *ptr = NULL;
	int total = 0;
	int i = 0;

	if (min > max)
		return (NULL);
	total = (max - min) + 1;
	ptr = (int *)malloc(sizeof(int) * total);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < total; i++)
		ptr[i] = i;
	return (ptr);
}
