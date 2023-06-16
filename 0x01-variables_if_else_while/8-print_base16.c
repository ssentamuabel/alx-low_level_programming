#include<stdio.h>
/**
 *  main - print base 10 symbols using putchar
 *
 *  Return: 0 always
 */
int main(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		putchar((char)num);
	}
	for (num = 97; num < 103; num++)
	{
		putchar((char)num);
	}
	putchar('\n');

	return (0);
}
