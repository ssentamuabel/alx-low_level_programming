#include<stdlib.h>
/**
 *  _realloc - extend memory
 *  @ptr: the older memory location
 *  @old_size: the old size of memory
 *  @new_size: the new size of memory
 *
 *  Return: the void pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	int min_size = 0;
	int i;
	char *src = 0;
	char *dest = 0;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == old_size)
		return (ptr);
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	src = (char *)ptr;
	dest = (char *)new_ptr;
	for (i = 0; i < min_size; i++)
		dest[i] = src[i];
	free(ptr);
	return (new_ptr);
}


