#include "lists.h"
/**
 *  print_list - prints the list
 *  @h: the head of the list
 *
 *  Return: int
 */
size_t print_list(const list_t *h)
{
	size_t total = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s", 0, "(nil)");
		else
			printf("[%d] %s", h->len, h->str);

		total++;
		h = h->next;
		printf("\n");
	}
	return (total);
}
