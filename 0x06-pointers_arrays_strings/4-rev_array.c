/**
 *  reverse_array - reverses the array
 *
 *  @a: the pointer to the array
 *  @n: the number of elements in the array
 *
 *  Return: int
 */
void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;
	int temp;

	while (start < end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
}

