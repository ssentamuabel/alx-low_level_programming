#include<stdio.h>
/**
 *  main - print the arguments
 *  @argc: the number of arguments
 *  @argv: the array of strings
 *
 *  Return: int
 */
int main(int argc, char **argv)
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
