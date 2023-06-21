#include<stdio.h>
/**
 *  main - print fibonnaci numbers
 *
 *  Return: 0 or success
 */
int main(void)
{
	int first = 1;
	int last = 2;
	int temp;
	int i;

	for (i = 1; i < 50; i++)
	{
		
		printf("%d, ", first);
		temp = first;
		first = last;
		last = last + temp;
	}
	printf("\n");

	return  (0);
}
