#include "main.h"
/**
 *  print_numbers - print numbers
 *  Return: nothing
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar((char)i);
	}
	_putchar((char)10);
	
	return;
}
