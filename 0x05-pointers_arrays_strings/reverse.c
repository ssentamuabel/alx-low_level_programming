#include "main.h"
#include<stdio.h>
/**
 *  print_rev - reverse of a string
 *  @s: the pointer of the string to reverse
 *  Return: void
 */
void main(void)
{
	int i, len;
	char *s;
	s = "I do not fear computers";
	
	for (i = 0; *(s + i) != '\0'; i++)
	{
		len++;
		printf("%d\n",i);
	}
	printf("%d\n",len);
	for (i = 0; i > len; i++)
	{
		printf("%c", *(s + i));
	}
}
