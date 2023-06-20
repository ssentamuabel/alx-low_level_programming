#include "main.h"
/**
 *  main - print _putchar
 *
 *  Return: 0 always
 */
int main(void)
{
char wd[] = "_putchar";
int n;

for (n=0; n<8; n++)
{
_putchar(wd[n]);
}
_putchar((char)10);

return (0);
}
