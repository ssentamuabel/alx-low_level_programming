#include "variadic_functions.h"
#include<stdio.h>
/**
 *  print_strings - prints strings
 *  @separator: the address of the separator
 *  @n: the number of string
 *
 *  Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *str;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);
		printf("%s", (str == NULL) ? "(nil)" : str);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);

	}
	printf("\n");
	va_end(list);
}
