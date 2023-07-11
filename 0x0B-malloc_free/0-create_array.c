#include<stdlib.h>
/**
 *  create_array - creates an array of a given size
 *  @size:the number of elements in the array
 *  @c: the character to occupy the memory
 *
 *  Return: the address of the memory
 */
char *create_array(unsigned int size, char c)
{
	char  *ptr = 0;
	unsigned int i;

	if (size < 1)
		return (ptr);
	ptr = (char *)malloc(size * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
