#include<stdlib.h>
/**
 *  string_nconcat - concatenate two strings
 *  @s1: the first string
 *  @s2: the second string
 *  @n: the number of characters
 *
 *  Return: address to the new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new = 0;
	unsigned int lens1 = 0, lens2 = 0, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* find the length of the strings */
	i = 0;
	while (s1[i] != '\0')
	{
		lens1++;
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		lens2++;
		i++;
	}
	if (n >= lens2)
		n = lens2;
	/* Reserve the space required */
	new = (char *)malloc((lens1 + lens2 + 1) * sizeof(char));
	if (new == NULL)
		return (NULL);
	for (i = 0; i < lens1; i++)
		new[i] = s1[i];
	for (i = lens1; i <= lens2; i++)
		new[i] = s2[i - lens1];
	new[i] = '\0';
	return (new);
}
