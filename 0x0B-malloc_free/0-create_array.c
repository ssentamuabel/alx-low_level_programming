#include "main.h"
/**
 *  create_array - creates an array of a character
 *  @size: the size of the array
 *  @c: the cahracter
 *
 *  Return: the pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *ptr = NULL;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	ptr = (char *)malloc(sizeof(char) * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	/* insert the character in the array */
	while (i < size)
	{
		ptr[i] = c;
		i++;
	}

	return (ptr);
}
