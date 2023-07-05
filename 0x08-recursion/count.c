#include<stdio.h>
int count(char *s)
{
	if (*s == '\0')
	{
		return 0;
	}
	else
	{
		return 1 + count(s + 1);
	}
}
int main(void)
{


	printf("%d\n", count("hello"));

	return (0);
}
