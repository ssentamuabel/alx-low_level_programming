#include "main.h"
/**
 *  _realloc - reallocate memory
 *  @ptr: previous pointer
 *  @old_size: the previous size
 *  @new_size: new size
 *
 *  Return: pointer to the new address
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newptr = NULL;
	char *ptrc = NULL;
	unsigned int i, required;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);

	newptr = (char *)malloc(new_size);
	if (newptr == NULL)
		return (NULL);
	if (ptr != NULL)
	{
		/* if its not null, we have to change data */
		required = (new_size < old_size) ? new_size : old_size;
		ptrc = (char *)ptr;
		for (i = 0; i < required; i++)
			newptr[i] = ptrc[i];
		free(ptr);
	}

	return (newptr);
}
