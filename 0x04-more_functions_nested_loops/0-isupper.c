#include "main.h"
/**
 *  _isupper - checks for upper case
 *  @c: the value to check for
 *
 *  Return: int
 */
int _isupper(int c)
{
int n;
if (c > 64 && c < 92)
{
n = 1;
}
else
{
n = 0;
}

return (n);
}
