#include "lists.h"
/**
 *  free_list - free list
 *  @head: the pointer to head
 *
 *  Return: void
 */
void free_list(list_t *head)
{
	list_t *temp = NULL;

	if (head != NULL)
	{
		temp = head;
		head = head->next;

		free(temp->str);
		free(temp);

	}
	else
	{
		return;
	}
}
