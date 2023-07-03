/**
 *  memset - sets the first n bytes b
 *  @b: the byte to set
 *  @s: the pointer to the char
 *  @n: the number of firts elements 
 *
 *  Return: the address of the first charcter
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *temp = s;

	while ((*s != '\0') && (n > 0))
	{
		*s = b;
		s++;
		n--;
	}

	return (temp);
}
