#include<stdio.h>
/**
 *  main - print all letters small cap reverse
 *
 *  Return: 0 when complete
 */
int main(void)
{
char ch = 'a';
int i;
for (i = 25; i >= 0; i--)
{
putchar(ch);
ch++;
}
putchar('\n');
return (0);
}
