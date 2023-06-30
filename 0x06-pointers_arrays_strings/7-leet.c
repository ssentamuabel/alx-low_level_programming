/**
 *  leet - replace the character
 *  @str: the stirng to check
 *
 *  Return: the address to the string
 */
char *leet(char *str)
{
	char charaters[] = {'a', 'A', 'e', 'E', 'o', 'O', 'l', 'L', 't', 'T'};
	char values[] = {'4', '4', '3', '3', '0', '0', '1', '1', '7', '7'};
	char *temp = str;
	int i;

	while (*str != '\0')
	{
		i = 0;
		while (i < 10)
		{
			if (*str == charaters[i])
			{
				*str = values[i];
				break;
			}
			i++;
		}
		str++;
	}

	return (temp);
}
