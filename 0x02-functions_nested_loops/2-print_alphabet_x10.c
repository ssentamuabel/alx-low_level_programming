#include "main.h"
/**
 *  print_alphabet_x10 - print alphabet x 10
 *
 *  Return: nothing
 */
void print_alphabet_x10(void)
{
int n, i;

for (i = 0; i < 10; i++)
{	
for (n = 97; n < 123; n++)
{
_putchar((char)n);
}
_putchar((char)10);
}

return;
}
