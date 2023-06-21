#include<stdio.h>
/**
 *  print_to_98 - print from n to 98
 *  @n:  the starting point of printing
 *
 *  Return: nothing
 */
void print_to_98(int n)
{
int i;

for (i = n; i < 99; i++)
{
if (i != 98)
{
printf("% d,", i);
}
else
{
printf("% d", i);
}
}
printf("\n");
}
