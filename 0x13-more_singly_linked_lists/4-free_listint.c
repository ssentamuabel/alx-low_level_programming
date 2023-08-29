#include "lists.h"
/**
 *  free_listint - frees the list of integers
 *  @head: the head of the linked list
 *
 *  Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp = NULL;

	if (head != NULL)
	{
		temp = head;
		head = head->next;

		free(temp);
	}

}
