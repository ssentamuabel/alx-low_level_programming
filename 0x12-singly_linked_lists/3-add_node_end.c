#include "lists.h"
/**
 *  _strlen - length of the string
 *  @str: the address of the string
 *
 *  Return: int
 */
int _strlen(const char *str)
{
	int len = 0;


	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}
/**
 *  add_node_end - add the node at the end
 *  @head: the head of the list
 *  @str: the address of the string
 *
 *  Return: list address
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = NULL;
	list_t *current = *head;

	new = (list_t *)malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->len = _strlen(str);
	new->str = strdup(str);
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
