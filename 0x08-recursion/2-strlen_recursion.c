/**
 *  _strlen_recursion - the length of the string
 *  @s: address of the string
 *
 *  Return: int
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
