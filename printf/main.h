#ifndef HEADER_H
#define HEADER_H

/** header files **/
#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>
#include<stdarg.h>
typedef void (*print_handler)(va_list args);
/** functions */
int _putchar(char c);
int _puts(char *s);
int _printf(const char *format, ...);
void print_percent(va_list args);
void print_string(va_list args);
void print_char(va_list args);
int v_printf(const char *format, va_list args);
#endif

