#include<stdio.h>
/**
 *  main - prints the size of various data types
 *  Return: 0 if everything runs well
 */
int main(void)
{
	char c;
	int h;
	long int bc;
	long long int ab;
	float gh;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(h));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(bc));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(ab));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(gh));

	return (0);
}
