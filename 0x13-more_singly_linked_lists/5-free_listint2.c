#include "lists.h"
/**
 *  free_listint2 - free list
 *  @head: address of the head
 *
 *  Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp = NULL;
	listint_t *current  = *head;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}

	*head = NULL;
}
