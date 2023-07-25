#include "main.h"
/**
 *  v_printf - prints the characters on the stdout
 *  @format: the address of the argument
 *  @args: the arguments
 *
 *  Return: int
 */
int v_printf(const char *format, va_list args)
{
	char specifier;
	int count = 0;

	void (*print_handler[])(va_list args) = {
		&print_char, &print_string, &print_percent
	};
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			specifier = *format;
			if (specifier == 'c')
			{
				(*print_handler[0])(args);
			}
			else if (specifier == 's')
			{
				(*print_handler[1])(args);
			}
			else if (specifier == '%')
			{
				(*print_handler[2])(args);
			}
			else
			{
				_putchar(*format);
			}
		}
		else
		{
			_putchar(*format);
		}
		format++;
		count++;
	}
	_putchar(-1);
	return (count);
}
