#include "main.h"
/**
 *  times_table
 *  Return: void
 */
void times_table(void)
{
int values[] = {48, 49, 50, 51, 52, 53, 54, 55, 56, 57};
int i, j, k, second, first, n;

for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
if ((i * j) < 10)
{
if (j != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
_putchar((char)values[(i * j)]);

}
else
{
n = i * j;
for (k = 0; k < 2; k++)
{
if (k == 0)
{
first = n % 10;
n = n / 10;
}
if (k == 1)
second = n % 10;
}
_putchar(',');
_putchar(' ');
_putchar((char)values[second]);
_putchar((char)values[first]);
}

}
_putchar((char)10);
}
}
