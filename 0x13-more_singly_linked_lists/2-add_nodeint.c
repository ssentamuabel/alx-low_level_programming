#include "lists.h"
/**
 *  add_nodeint - add node at the begining
 *  @head: the address of the pointer to the pointer
 *  @n: the number of integers
 *
 *  Return: listint_t
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = NULL;

	new = (listint_t *)malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (*head);
}
