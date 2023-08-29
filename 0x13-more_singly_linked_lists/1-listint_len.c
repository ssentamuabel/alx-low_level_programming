#include "lists.h"
/**
 *  listint_len - length of the list
 *  @h: the address of the list
 *
 *  Return: int
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}

	return (num);
}
