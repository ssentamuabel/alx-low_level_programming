#include "main.h"
/**
 *  print_line
 *  @n: number of lines
 *  Return: none
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar((char)95);
	}
	_putchar((char)10);
}
