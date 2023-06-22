#include<stdio.h>
/**
 *  main - check for multiples of 3 & 5
 *  Return: 0;
 */
int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz\n");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz\n");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz\n");
		}
		else
		{
			printf("%d\n", i);
		}
	}
}
