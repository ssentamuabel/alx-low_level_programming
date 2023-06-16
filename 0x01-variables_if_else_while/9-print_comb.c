#include<stdio.h>
/**
 *  main - print cobination with ,
 *
 *  Return: 0 always
 */
int main(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		putchar((char)num);
		if (num == 57)
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
