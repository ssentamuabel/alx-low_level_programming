#include<stdio.h>
#include "main.h"
/**
 *  main - print the program name
 *  @argc: the number of args
 *  @argv: the array of arg
 *
 *  Return: int
 */
int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);

	return (0);
}
