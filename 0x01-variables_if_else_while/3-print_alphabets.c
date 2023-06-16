#include<stdio.h>
/**
 *  main - print small and big caps
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
ch = 'A';
for (i = 0; i < 26; i++)
{
putchar(ch);
ch++;
}	
putchar('\n');

return (0);
}
