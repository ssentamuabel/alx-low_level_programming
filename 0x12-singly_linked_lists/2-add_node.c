#include "lists.h"
/**
 *  _strlen - couts the string lenghth
 *  @str: the address of the string
 *
 *  Return: int
 */
int _strlen(const char *str)
{
	int i = 0;

	while (str[i] != 0)
	{
		i++;
	}

	return (i);
}
/**
 *  add_node - add node at the begining
 *  @head: address of the head
 *  @str: address of the string
 *
 *  Return: int
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = NULL;

	new = (list_t *)malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->len = _strlen(str);
	new->str = strdup(str);

	new->next = *head;

	*head = new;

	return (*head);
}
