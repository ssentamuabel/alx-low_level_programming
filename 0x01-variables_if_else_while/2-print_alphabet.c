#include<stdio.h>

/**
 *  main - print all letters small cap
 *
 *  Return: 0 when complete
 */
int main(void)
{
char ch = 'a';
int i;

for (i = 0; i < 26; i++)
{
putchar(ch);
ch++;
}	
putchar('\n');

return (0);
}
