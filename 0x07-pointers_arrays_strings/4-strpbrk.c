/**
 *  _strpbrk - tress a pattern of words
 *  @s: the address of the string
 *  @accept: the string to look for
 *
 *  Return: address of the string
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				return (s);
			}
			accept++;
		}
		s++;
	}

	return (0);
}
