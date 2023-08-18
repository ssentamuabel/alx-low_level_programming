#include "variadic_functions.h"
#include<stdio.h>
/**
 *  print_all - prints all
 *  @format: address of the format
 *  Return: void
 */
void print_all(const char * const format, ...)
{
	char *str;
	char *sep = "";
	int i = 0;

	va_list list;

	if (format)
	{
		va_start(list, format);
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					break;
			}
			sep = ",";
			i++;
		}
		va_end(list);
	}
	printf("\n");
}
