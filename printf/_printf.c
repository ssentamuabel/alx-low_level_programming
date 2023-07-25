#include "main.h"
int _printf(const char *format, ...) {
	int i = 0;
    va_list args;
    va_start(args, format);

    v_printf(format, args);

    va_end(args);

    return (i); // Return the number of characters printed (not implemented in this basic version)
}
