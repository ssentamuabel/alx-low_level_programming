#include<stdlib.h>
/**
 *  str_concat - concatenates two strings
 *  @s1: the first string
 *  @s2: the second string
 *
 *  Return: address to the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int count = 0, count2 = 0, i = 0, j = 0;
	char *new = 0;

	while (s1[count] != '\0')
		count++;
	while (s2[count2] != '\0')
		count2++;
	new = (char *)malloc((count + count2 + 1) * sizeof(char));
	if (new == NULL)
		return (NULL);
	for (i = 0; i < count; i++)
	{
		new[i] = s1[i];
	}
	for (j = 0; j < count2; j++)
		new[i + j] = s2[j];
	new[i + j + 1] = '\0';

	return (new);
}
