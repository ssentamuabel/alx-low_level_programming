#include<stdio.h>
/**
 *  main - print th multiples of 3 and 5
 *
 *  Return: 0 success
 */
int main(void)
{
int sum = 0;
int i;

for (i = 3; i < 1024; i++)
{
if ((i % 3 == 0) || (i % 5 == 0))
{
sum = sum + i;
}
}
printf("%d\n", sum);

return (0);
}
