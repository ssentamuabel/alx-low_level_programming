#include<stdio.h>
/**
 *  before_main - action performed before main
 *
 *  Return: void
 */
void __attribute__((constructor)) before_main()
{
	printf("You are bea! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
