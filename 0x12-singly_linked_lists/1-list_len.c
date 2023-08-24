#include "lists.h"
/**
 *  list_len - the length of a list
 *  @h: the address of the head
 *
 *  Return: int
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}

	return (len);
}
