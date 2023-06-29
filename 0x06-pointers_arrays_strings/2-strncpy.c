/**
 *  _strncpy - copy the n number of characters
 *  @dest: the destination of the copy
 *  @src: the source of the character
 *  @n: this is the number of a character
 *  Return: address of the first element
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *temp = dest;
       
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}

	return (temp);
}
