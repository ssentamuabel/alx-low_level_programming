#include "main.h"
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
