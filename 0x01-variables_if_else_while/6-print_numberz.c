#include<stdio.h>
/**
 *  main - print base 10 symbols using putchar
 *
 *  Return: 0 always
 */
int main(void)
{
	int num;

	for(num = 49; num < 58; num++)
	{
		putchar((char)num);
	}
	putchar('\n');

	return (0);
}
