#include "main.h"
/**
 *  _printf - print the character
 *  @format:the character formater
 *
 *  Return: int
 */
int _printf(const char *format, ...)
{
	int i = 0;
	va_list args;

	va_start(args, format);
	i = v_printf(format, args);
	va_end(args);

	return (i);
}
