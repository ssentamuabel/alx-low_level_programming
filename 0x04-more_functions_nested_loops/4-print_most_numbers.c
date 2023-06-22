#include "main.h"
/**
 *  print_most__numbers - print numbers less 2 and 4
 *  Return: nothing
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if ((i == 50) || (i == 52))
			continue;
		_putchar((char)i);
	}
	_putchar((char)10);
	
	return;
}
