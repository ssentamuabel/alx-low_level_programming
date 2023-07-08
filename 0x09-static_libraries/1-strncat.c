/**
 *  _strncat - concatenate a string
 *  @dest: the destination string
 *  @src: the source string
 *  @n: the number of characters to copy
 *  Return: address of the first element
 */
char *_strncat(char *dest, char *src, int n)
{
	char* temp = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while ((*src != '\0') && (n > 0))
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	*dest = '\0';

	return (temp);
}
