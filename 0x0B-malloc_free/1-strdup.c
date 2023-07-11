#include<stdlib.h>
/**
 *  _strdup -  duplicate a string
 *  @str - address of the string to duplicate
 *
 *  Return: the address of a new duplicate
 */
char *_strdup(char *str)
{
	char *dup = 0;
	int i, count = 0;

	if (str == NULL)
		return (NULL);
	while (str[count] != '\0')
	{
		count++;
	}
	dup = (char *)malloc((count + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);
	for (i = 0; i <= count; i++)
	{
		dup[i] = str[i];
	}
	dup[count] = '\0';
	return (dup);
}
