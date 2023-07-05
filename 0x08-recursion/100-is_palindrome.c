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
 *  is_palindrome_recursive - to carry out recursing
 *  @s: the address of the string
 *  @start: the starting value
 *  @end: the end vale
 *
 *  Return: int
 */
int is_palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}

	return (is_palindrome_recursive(s, start + 1, end - 1));
}
/**
 *  is_palindrome - checks for a palindrome
 *
 *  @s: the address of the character
 *
 *  Return: int
 */
int is_palindrome(char *s)
{
	/* count - to return the length of a string */
	int len = count(s);

	return (is_palindrome_recursive(s, 0, len - 1));
}
