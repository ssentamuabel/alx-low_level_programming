#include "main.h"
typedef void (*print_handler)(va_list args);
void print_char(va_list args) {
    char ch = va_arg(args, int);
    _putchar(ch);
}

void print_string(va_list args) {
    _puts(va_arg(args, char*));
}

void print_percent(va_list args) {
    _putchar('%');
}

print_handler handlers[128] = {
     ['c'] = &print_char,
    ['s'] = &print_string,
    ['%'] = &print_percent,
};

void v_printf(const char *format, va_list args) {
	
    while (*format) {
        if (*format == '%') {
            format++; // Move past the '%'
            char specifier = *format;
            print_handler handler = handlers[specifier];
            if (handler) {
                handler(args);
            } else {
                // Unknown conversion specifier, just print the '%'
                _putchar('%');
            }
        } else {
            // Regular character, just print it
            _putchar(*format);
        }
        format++;

    }
    _putchar(-1);
   
}
