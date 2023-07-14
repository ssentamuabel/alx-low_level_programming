#include<stdlib.h>
/**
 *  _calloc - allocate memory
 *  @nmemb: the number of elements
 *  @size: the size of each element
 *
 *  Return: the address
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr = 0;

	if ((nmemb == 0) || (size == 0))
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}

