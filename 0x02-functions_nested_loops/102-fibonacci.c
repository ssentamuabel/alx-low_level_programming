#include<stdio.h>  
/**
 *  main - fibonnacci numbers
 *  Return: 0 success
 */
int main()    
{    
long int n1 = 1L, n2 = 2L, n3;
int i;

printf("%ld, %ld, ", n1, n2);
for (i = 2; i < 50; ++i)   
{    
n3 = n1 + n2;
if ( i == 49)
{
printf("%ld", n3);
}
else
{
printf("%ld, ", n3);    
n1 = n2;    
n2 = n3;
}
}
printf("\n");
return (0);  
}    
