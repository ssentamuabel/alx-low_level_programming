#include "main.h"
/**
 *  _islower -checks for lower case
 *  @c a character to check
 *
 *  Return: 1 if lower else 0
 */
int _islower(int c)
{
int n;

if (c > 96 && c < 134)
{
n = 1;
}
else
{
n = 0;
}

return (n);
}
