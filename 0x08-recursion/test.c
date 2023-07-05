/**
 *  is_palindrome - checks for a palindrome
 *
 *  @s: the address of the character
 *
 *  Return: int
 */
int is_palindrome(char *s)
{
	int n = 0;
	char *temp = s;

	while (*s != '\0')
	{
		n++;
		s++;
	}
	n = n / 2;
	while (n > 0)
	{
		if (*temp != *(s - 1))
		{
			return (0);
		}
		temp++;
		s--;
		n--;
	}

	return (1);
}
