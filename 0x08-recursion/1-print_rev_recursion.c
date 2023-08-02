#include "main.h"
/**
 *  len - length of the string
 *  @s: pointer string
 *
 *  Return: int
 */
int len(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + len(s + 1));
}
/**
 *  helper - helps truck indinces
 *  @s: addresss of the string
 *  @start: the  start of the string
 *  @end: the end of the string
 *
 *  Return: void
 */
void helper(char *s,  int start, int end)
{
	if (start > end)
		return;
	_putchar(s[end]);
	helper(s, start, end - 1);
}
/**
 *  _print_rev_recursion - prints the recursion of characters
 *  @s: the address of the string
 *
 *  Retunrn: void
 */
void _print_rev_recursion(char *s)
{
	int i = 0;

	i = len(s);

	helper(s, 0, i - 1);
}
