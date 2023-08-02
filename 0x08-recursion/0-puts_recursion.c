#include "main.h"
/**
 *  _puts_recursion -  puts charaters
 *  @s: address of the string
 *
 *  Return: null
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar((char)10);
		return;
	}
	_putchar(*s);
	s++;

	_puts_recursion(s);
}

