#include "main.h"
/**
 *  jack_bauer - print time
 *
 *  Return: nothing
 */
void jack_bauer(void)
{
int l, k, j, i;

for (l = 48; l < 51; l++)
{
for (k = 48; k < 52; k++)
{
for (j = 48; j < 54; j++)
{
for (i = 48; i < 58; i++)
{
_putchar((char)l);
_putchar((char)k);
_putchar(':');
_putchar((char)j);
_putchar((char)i);
_putchar((char)10);
}
}
}
}
}
