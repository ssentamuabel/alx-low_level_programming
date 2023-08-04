#include<stdio.h>
/**
 *  main - print arguments
 *  @argc: the number of arguments
 *  @argv: array of arguments
 *
 *  Return: int
 */
int main(int argc, char *argv[])
{
	int value = 0;

	while (value < argc)
	{
		printf("%s\n", argv[value]);
		value++;
	}

	return (0);
}
