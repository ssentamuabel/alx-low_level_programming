 #include "lists.h"
/**
 *  add_nodeint_end - add node at the end od the list
 *  @head: firsr element of the list
 *  @n: the value for the list
 *
 *  Return: address of the list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = NULL;
	listint_t *current = *head;

	new = (listint_t *)malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (current->next != NULL)
			current = current->next;
		current->next = new;
	}

	return (new);
}
