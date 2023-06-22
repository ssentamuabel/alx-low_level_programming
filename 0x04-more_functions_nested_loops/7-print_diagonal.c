#include "main.h"
/**
 *  print_diagonal - print a diagonal line
 *  @n: number of strokes
 *  Return: void
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i == j)
				_putchar('\');
		}
		_putchar((char)10);
	}
}
