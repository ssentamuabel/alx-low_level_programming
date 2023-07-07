#include<stdio.h>
#include<stdlib.h>
/**
 *  main - add two aruguments
 *  @argc: the number of arguments
 *  @argv: the array of arguments
 *
 *  Return: int
 */
int main(int argc, char **argv)
{
	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) *  atoi(argv[2]));
	}


	return (0);
}
