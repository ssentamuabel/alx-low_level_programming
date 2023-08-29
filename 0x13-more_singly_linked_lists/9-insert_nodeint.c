#include "lists.h"
/**
 *  insert_nodeint_at_index - insert node at a certain index
 *  @head: the address of the head
 *  @idx: the index to insert the new node
 *  @n: the value in the new node
 *
 *  Return: listint_t
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = NULL;
	listint_t *temp = *head;
	listint_t *temp2 = NULL;
	unsigned int holder = 0;

	if (temp == NULL)
		return (NULL);

	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	while (temp != NULL)
	{
		if (holder == idx - 1)
		{
			temp2 = temp->next;
			temp->next = new_node;
			new_node->next = temp2;

			return (new_node);
		}
		temp = temp->next;
		holder++;
	}
	return (NULL);
}
