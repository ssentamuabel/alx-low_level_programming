#include "lists.h"
/**
 *  get_nodeint_at_index - get the node at index
 *  @head: the address of the head
 *  @index: the index of the node
 *
 *  Return: the address of the node index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int holder = 0;

	if (head == NULL)
		return (NULL);
	while (temp->next != NULL)
	{
		if (holder == index)
			return (temp);
		holder++;
		temp = temp->next;
	}

	return (NULL);
}
