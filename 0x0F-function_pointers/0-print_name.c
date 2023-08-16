#include "function_pointers.h"
/**
 *  print_name - prints the name
 *  @name: the address of the name
 *  @f: the pointer to the function
 *
 *  Return: null
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
