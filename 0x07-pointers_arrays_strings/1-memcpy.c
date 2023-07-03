/**
 *  _memcpy - copy src to  dest
 *
 *  @dest: the address to the destination
 *  @src: the address to the source
 *  @n: the number of characters to copy
 *
 *  Return: the address of the destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *temp = dest;

	while ((*src  != '\0') && (n > 0))
	{
		*dest = *src;
		src++;
		dest++;
		n--;
	}

	return (temp);
}
