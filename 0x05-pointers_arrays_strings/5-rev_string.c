#include "main.h"
/**
 *  rev_string - reverse of a string
 *  @s: the pointer of the string to reverse
 *  Return: void
 */
void rev_string(char *s)
{
	int i, len;
	char left;

	for (i = 0; *(s + i) != '\0'; i++)
	{
	}
	len = i;
	if ((len % 2) == 0)
	{
		for (i = 0; i <= (len / 2); i++)
		{
			left = *(s + i);
			*(s + i) = *(s + (len - i - 1));
			*(s + (len - i - 1)) = left;
		}
	}
	else
	{
		for (i = 0; i <= (len / 2) + 1; i++)
		{
			left = *(s + i);
			*(s + i) = *(s + (len - i - 1));
			*(s + (len - i - 1)) = left;
		}
	}
}
