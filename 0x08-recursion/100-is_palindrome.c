/**
 *  is_palindrome_recursive - checks for palindrome
 *  @s: the character string
 *  @start: the start value
 *  @end: the end value
 *
 *  Return: int
 */
int is_palindrome_recursive(char *s, int start, int end)
{
	if (start > end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (is_palindrome_recursive(s, start + 1, end - 1));
}
/**
 *  len - to get length of the string
 *  @s: the string address
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
 *  is_palindrome - to check for palidrome
 *  @s: the address if your available
 *
 *  Return:  int
 */
int is_palindrome(char *s)
{
	int length = 0;

	length = len(s);
	if (length == 0)
		return (1);
	return (is_palindrome_recursive(s, 0, length - 1));
}
