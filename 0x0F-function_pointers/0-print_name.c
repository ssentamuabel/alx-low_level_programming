#include "function_pointers.h"
/**
 *  print_name - prints the name
 *  @name: pointer to the name
 *  @f: pointer to the function
 *
 *  Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
