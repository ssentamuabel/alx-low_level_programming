#include<stdio.h>
/**
 *  main - print all letters small cap reverse
 *
 *  Return: 0 when complete
 */
int main(void)
{
int i;
for (i = 122; i >= 97; i--)
{
putchar((char)i);
}
putchar('\n');
return (0);
}
