#include "main.h"
/**
 *  count - to count characters
 *  @s: the address of the string
 *
 *  Return:int
 */
int count(char *s)
{
        if (*s == '\0')
        {
                return (0);
        }
        else
        {
                return (1 + count(s + 1));
        }
}
/**
 *  reverse_string_recursive - recusively swaps the characters
 *  @start: start of the string
 *  @end: end of the string
 *  
 *  Return: void
 */
void reverse_string_recursive(char *s, int start, int end)
{
	char *starte = s + start;
	char *ende = s + end;

	if (start >= end)
	{
		return;
	}
	s = ende;
	ende = starte;
	reverse_string_recursive(s, start + 1, end - 1);
}
/**
 *  _print_rev_recursion - prints a string in reverse
 *  @s: the address of the string
 *
 *  Return: void
 */
void _print_rev_recursion(char *s)
{
	int len = count(s);

	reverse_string_recursive(s, 0, len - 1);
}
