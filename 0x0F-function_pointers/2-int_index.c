#include "function_pointers.h"
/**
 *  int_index - traces the index for the valid value
 *  @array: the address of the array
 *  @size: the size of the array
 *  @cmp: the address of the function
 *
 *  Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int count = 0;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	while (count < size)
	{
		if (cmp(array[count]))
			return (count);
		count++;
	}

	return (-1);

}
