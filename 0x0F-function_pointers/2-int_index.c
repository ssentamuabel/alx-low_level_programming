/**
 *  int_index - find the index of the value
 *  @array: the address of the array
 *  @size: the size of the array
 *  @cmp: the function pointer
 *
 *  Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
