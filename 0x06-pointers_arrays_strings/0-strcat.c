/**
 * _strcat - concatenate a string
 * @dest: the destination string
 * @src: the source string
 *
 * Return: pointer to the result
 */
char *_strcat(char *dest, char *src)
{
	char* temp = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (temp);
}
