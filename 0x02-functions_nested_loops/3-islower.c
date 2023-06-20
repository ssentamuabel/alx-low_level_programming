#include "main.h"
/**
 *  _islower -checks for lower case
 *
 *  Return 1 if lower else 0
 */
int _islower(int c)
{
int n;
if (c > 64 && c < 92)
{
n = 0;
}
if (c > 96 && c < 134)
{
n = 1;
}
return (n);
}
