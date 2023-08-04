#include<stdio.h>
/**
 *  main - print the number of arguments
 *  @argc: the number of arguments
 *  @argv: the array of args
 *
 *  Return: int
 */
int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
