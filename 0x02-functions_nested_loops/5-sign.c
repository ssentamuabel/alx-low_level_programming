#include "main.h"
/**
 *  print_sign - prints the sign of the input
 *  @n: the value to check
 *
 *  Return: int
 */
int print_sign(int n)
{
int value;

if (n > 0)
{
_putchar('+');
value = 1;
}
if (n == 0)
{
_putchar('0');
value = 0;
}
if (n < 0)
{
_putchar('-');
value = -1;
}

return (value);
}
