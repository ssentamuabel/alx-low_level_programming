#include<stdlib.h>
/**
 * _memset - sets the first n bytes b
 *  @b: the byte to set
 *  @s: the pointer to the char
 *  @n: the number of firts elements
 *
 *  Return: the address of the first charcter
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *temp = s;

	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}

	return (temp);
}
/**
 *  _calloc - allocate memory
 *  @nmemb: the number of elements
 *  @size: the size of each element
 *
 *  Return: the address
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr = NULL;

	if ((nmemb == 0) || (size == 0))
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	ptr = _memset(ptr, 0, (nmemb * size));

	return (ptr);
}

