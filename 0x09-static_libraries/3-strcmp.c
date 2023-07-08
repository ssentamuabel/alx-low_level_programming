/**
 *  _strcmp - compare strings
 *
 *  @s1: pointer to the string to compare
 *  @s2: pointer to the second string
 *
 *  Return: int 
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*(unsigned char *)s1 - *(unsigned char * )s2);
}
