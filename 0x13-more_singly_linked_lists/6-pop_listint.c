#include "lists.h"
/**
 *  pop_listint - pop off the head
 *  @head: the head of the list
 *
 *  Return: int
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int value = temp->n;

	if (temp == NULL)
		return (0);

	*head = (*head)->next;

	free(temp);

	return (value);
}
