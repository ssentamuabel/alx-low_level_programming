#include<stdlib.h>
/**
 *  malloc_checked - malloc check
 *  @b: the size of memory to check
 *
 *  Return:the address of the pointer
 */
void *malloc_checked(unsigned int b)
{
	int *ptr = (int *)malloc(b);

	if (ptr == NULL)
		exit(96);
	return (ptr);
}
