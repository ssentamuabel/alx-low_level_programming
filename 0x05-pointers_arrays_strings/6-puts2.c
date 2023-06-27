#include "main.h"
/**
 *  puts2 - put characters in odd
 *  @str: the pointer pointing to the string
 *  Return: void
 */
void puts2(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i += 2)
	{
		if ((i != 0) && (i - 1 == '\0'))
		{
			break;
		}
		_putchar(*(str + i));
	}
	_putchar((char)10);
}
