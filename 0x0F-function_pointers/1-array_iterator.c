#include<stddef.h>
#include "function_pointers.h"
/**
 *  array_iterator - function to itrate through an array
 *  @array: array address
 *  @size: the size of the array
 *  @action: function pointer
 *
 *  Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
