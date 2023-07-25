#include "main.h"
/**
 *  _putchar - print the character
 *  @c: the charater to print
 *
 *  Return: int
 */
int _putchar(char c)
{
	static char buf[1024];
	static int i;

	if (c == -1 || i >= 1023)
	{
		write(1, &buf, i);
		i = 0;
	}
	if (c != -1)
	{
		buf[i] = c;
		i++;
	}
return (1);
}
