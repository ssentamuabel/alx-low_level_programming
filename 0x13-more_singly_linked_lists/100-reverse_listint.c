#include "lists.h"
/**
 *  reverse_listint - reverses the list
 *  @head: the address of the list
 *
 *  Return: listint_t
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;
	listint_t *next_temp = NULL;

	while (current != NULL)
	{
		next_temp = current->next;
		current->next = prev;
		prev = current;
		current = next_temp;
	}
	*head = prev;

	return (*head);
}
