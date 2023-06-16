#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/* more headers goes here */

/* betty style doc  for function main goes here */

/**
 *  main - determines the sign of a random number
 *
 *  Return: 0 on normal occasions
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes here */
	if (n > 0)
	{
		printf("%d is positive ", n);
	} else if (n == 0)
	{
		printf("%d is zero ", n);
	} else
	{
		printf("%d is negative ", n);
	}

	return (0);
}
