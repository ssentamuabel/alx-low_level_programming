#include "lists.h"
/**
 *  sum_listint - find the sum of the lists
 *  @head: the address of the first node
 *
 *  Return: int
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	if (head == NULL)
		return (0);

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
