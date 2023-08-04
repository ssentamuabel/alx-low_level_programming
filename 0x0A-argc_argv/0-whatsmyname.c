#include<stdio.h>
#include "main.h"
/**
 *  main - print the program name
 *  @argc: the number of args
 *  @argv: the array of arg
 *
 *  Return: int
 */
int main(int argc_attribute_((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
