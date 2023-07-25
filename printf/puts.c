#include "main.h"
/**
 *  _puts - prints the string
 *  @s: the address of the string
 *  Return: int
 */
int _puts(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	return (0);
}
