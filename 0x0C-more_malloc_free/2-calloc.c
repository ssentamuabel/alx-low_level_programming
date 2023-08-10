#include "main.h"
/**
 *  _calloc - the allocate space
 *  @nmemb: the number of vlauses
 *  @size: the size of the array
 *
 *  Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr = NULL;
	unsigned int i;
	char *ptrchar;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = (void *)malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);

	ptrchar = (char *)ptr;

	for (i = 0; i < nmemb * size; i++)
		ptrchar[i] = 0;

	return (ptr);
}
