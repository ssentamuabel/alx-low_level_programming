#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>
/**
 *  print_strings - to print strings
 *  @separator: the separator character
 *  @n: the number of arguments
 *
 *  Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	const char *str;

	va_start(list, n);
	for (i =  0; i < n; i++)
	{
		str = va_arg(list, const char*);
		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(list);
	printf("\n");
}
