#include<stdio.h>    
int main()    
{    
 int n1 = 1, n2 = 2, n3, i;    

 printf("%d, %d, ", n1, n2);    
 for (i = 2; i < 50; ++i)   
 {    
  n3 = n1 + n2;    
  printf("%d, ", n3);    
  n1 = n2;    
  n2 = n3;    
 }  
  return (0);  
 }    
