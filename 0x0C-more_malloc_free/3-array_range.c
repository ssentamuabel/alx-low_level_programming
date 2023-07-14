#include<stdlib.h>
/**
 *  array_range - print a range of numbers
 *  @min: the minimum number
 *  @max: maximum number
 *
 *  Return: address
 */
int *array_range(int min, int max)
{
	int *ptr = NULL;
	int i, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	ptr = (int *)malloc(size * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		ptr[i] = min + 1;
	}

	return (ptr);
}
