#include "main.h"
/**
 *  len - find the length of the string
 *  @str: the string to count
 *
 *  Return: int
 */
int len(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;

	return (i);
}
/**
 *  string_nconcat - concatenates n strings
 *  @s1: the address of the string one
 *  @s2: the address of the second  string
 *  @n: the number of strings to concatenate
 *
 *  Return: address to the new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr = NULL;
	unsigned int i;
	unsigned int lens1 = len(s1);
	unsigned int lens2 = len(s2);
	unsigned int total = 0;

	if (n >= lens2)
		n = lens2;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/* reserve space */
	total = lens1 + n;
	ptr = (char *)malloc(sizeof(char) * (total + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < lens1; i++)
		ptr[i] = s1[i];
	for (i = lens1; i < total; i++)
		ptr[i] = s2[i - lens1];
	ptr[total] = '\0';

	return (ptr);
}
