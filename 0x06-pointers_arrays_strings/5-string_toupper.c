/**
 *  string_toupper - change to upper
 *
 * @str: the pointer to the string
 *
 *  Return: address to pointer
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - 32;
		}
		ptr++;
	}

	return (ptr);
}
