#include "main.h"
/**
 *  _strdup - duplicate a string
 *  @str: the address of the string
 *
 *  Return: address of the new string
 */
char *_strdup(char *str)
{
	char *ptr;
	char *temp = str;
	int size = 0;
	int i = 0;

	if (str == NULL)
		return (NULL);

	/* Size of the string */
	while (*temp != '\0')
	{
		size++;
		temp++;
	}
	/* Allocatate space */
	ptr = (char *)malloc(sizeof(char) * (size + 1));
	if (ptr == NULL)
		return (NULL);

	while (i < size)
	{
		ptr[i] = *str;
		str++;
		i++;
	}

	return (ptr);
}
