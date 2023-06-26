#include "main.h"
/**
 *  _puts - puts string
 *  @s: pointer to the string 
 *  Return: nothg
 */
void _puts(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		_putchar(*(str + i));
	}
	_putchar((char)10);
}
