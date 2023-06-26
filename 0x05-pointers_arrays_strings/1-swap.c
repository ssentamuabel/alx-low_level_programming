/**
 *  swap_int - swap the values;
 *  @a: the firsr address value
 *  @b: the seconf address value
 *  Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
