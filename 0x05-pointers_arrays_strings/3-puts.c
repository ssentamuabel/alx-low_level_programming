#include "main.h"
/**
 *  _puts - puts string
 *  @str: pointer
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
