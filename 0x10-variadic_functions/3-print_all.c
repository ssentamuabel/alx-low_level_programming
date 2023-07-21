#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>
void print_char(va_list list)
{
	printf("%d", va_arg(list, int));
}
void print_int(va_list list)
{
	printf("%d", va_arg(list, int));
}
void print_float(va_list list)
{
	printf("%f", va_arg(list, double));
}
void print_string(va_list list)
{
	char *s = va_arg(list, char *);
	if (s == NULL)
		printf("%s", s);
	else
		printf("(nil)");
}
void print_all(const char * const format, ...)
{
	va_list list;
	char chr;

	va_start(list, format);
	void (*printfunc[])(va_list) = {print_char, print_int, print_float, print_string};
	const char *format_ptr  = format;
	while (*format_ptr != '\0')
	{
		char chr = *format_ptr;;
		if (chr == 'c')
			printfunc[0](list);
		else if (chr == 'i')
			printfunc[1](list);
		else if (chr == 'f')
			printfunc[2](list);
		else if (chr == 's')
			printfunc[3](list);
		format++;
		if (*format != '\0')
			printf(", ");
	}
	va_end(list);
	printf("\n");
}
