#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**
 *  main - prints the sum of arg
 *  @argc: the number of arguments
 *  @argv: the array of arguments
 *
 *  Return: int
 */
int main(int argc, char **argv)
{
	int sum = 0;
	int i, num;

	if (argc < 1)
	{
		printf("%d\n", 0);

		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);
		if (strcmp(argv[i], "0") != 0 && num == 0)
		{
			printf("Error\n");
			return (0);
		}
		else
		{
			sum += num;
		}
	}
	printf("%d\n", sum);

	return (0);
}
