#include "main.h"
/**
 *  _isalpha -checks for alphabets
 *  @c: a character to check
 *
 *  Return: 1 if alphabet else 0
 */
int _isalpha(int c)
{
int n;

if (c > 96 && c < 134 || c > 64 && c < 92)
{
n = 1;
}
else
{
n = 0;
}

return (n);
}
