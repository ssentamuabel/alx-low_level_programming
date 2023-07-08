/**
 *  _strspn - tracks for non similar
 *
 *  @s: the address to the string
 *  @accept: the string to check for
 *
 *  Return: int
 */
unsigned int _strspn(char *s, char *accept)
{
	int n = 0;
	char *temp1 = 0;
	char *temp = accept;

	while (*s != '\0')
	{
		accept = temp;
		temp1 = 0;
		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				temp1 = accept;
				break;
			}
			accept++;
		}
		if (temp1 == 0)
		{
			n++;
			s++;
			continue;
		}
		s++;
	}

	return (n);
}
