#include "variadic_functions.h"
#include<stdio.h>
/**
 *  print_number - prints the number
 *  @separator: the address of the separator
 *  @n: the number of numbers
 *
 *  Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));

		if (i != (n - 1))
		{
			if (separator != NULL)
				printf("%c ", *separator);
		}
	}

	printf("\n");
	va_end(list);
}
