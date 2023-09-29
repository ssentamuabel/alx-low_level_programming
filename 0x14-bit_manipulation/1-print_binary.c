#include "main.h"
/**
 *  print_binary - prints binary of a number
 *  @n: the value to be printed
 *
 *  Return: int
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) ? '1' : '0');
}
