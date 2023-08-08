#include "main.h"
/**
 *  str_concat - concate two strings
 *  @s1: address of the first string
 *  @s2: address of the second string
 *
 *  Return: the address of the new string
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr = NULL;
	int i;
	int len = 0, len2 = 0;

	/* if str in null treat as empty */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* count the charaters in the strings */
	while (s1[len] != '\0')
		len++;
	while (s2[len2] != '\0')
		len2++;
	/* Reserve memory for the new string */
	ptr = (char *)malloc(sizeof(char) * (len + len2 + 1));

	if (ptr == NULL)
		return (NULL);
	/* concate the strings */
	for (i = 0; i < len; i++)
		ptr[i] = s1[i];
	for (i = len; i < (len2 + len); i++)
		ptr[i] = s2[i - len];
	/* Add the null terminator */
	ptr[i] = '\0';

	return (ptr);
}
