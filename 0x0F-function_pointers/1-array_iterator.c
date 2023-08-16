#include "function_pointers.h"
/**
 *  array_iterator - iterate through the array
 *  @size: the size of the array
 *  @array: the array of items
 *  @action: function pointer
 *
 *  Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t count = 0;

	if (array == NULL || action == NULL)
		return;

	while (count < size)
	{
		action(array[count]);
		count++;
	}
}
