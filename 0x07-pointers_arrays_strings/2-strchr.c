/**
 *  _strchr - search for the character
 *  @s: the address of the string
 *  @c: the character we are looking for
 *  Return: the address of the first element
 */
char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == '\0')
	{
		return (s);
	}

	return (0);
}
