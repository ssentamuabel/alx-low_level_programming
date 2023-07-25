#include "main.h"
/**
 *  print_char - prints characters
 *  @args: the character argument
 *
 *  Return: void
 */
void print_char(va_list args)
{
	char ch = va_arg(args, int);

	_putchar(ch);
}
/**
 *  print_string - to print the string
 *  @args: the argument to be passed
 *
 *  Return: void
 */
void print_string(va_list args)
{
	_puts(va_arg(args, char*));
}
/**
 *  print_percent - prints the %
 *  @args: the argument to printt
 *
 *  Return: void
 */
void print_percent(va_list args)
{
	(void)args;
	_putchar('%');
}
