/**
 *  print_square
 *  @size: the size of the square
 *  Return: none
 */
void print_square(int size)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for ( j = 0; j < n; j++)
		{
			_putchar('#');
		}
		_putchar((char)10);
	}
}
