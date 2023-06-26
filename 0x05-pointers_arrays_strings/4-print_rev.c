#include "main.h"
#include<stdio.h>
/**
 *  print_rev - reverse of a string
 *  @s: the pointer of the string to reverse
 *  Return: void
 */
void print_rev(char *s)
{
	int i, len;
	
	for (i = 0; *(s + i) != '\0'; i++)
	{
	}
	len = i;
	for (i = len; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar((char)10);
}
