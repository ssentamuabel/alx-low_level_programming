#include "lists.h"
/**
 *  list_len - return the lists length
 *  @h: the list
 *
 *  Return: int
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}