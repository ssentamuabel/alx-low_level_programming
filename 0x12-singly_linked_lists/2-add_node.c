#include "lists.h"
/**
 *  add_node - adds a node at the begining of the list
 *  @head: address of the node to add on
 *  @str: the string address to add on the new node
 *
 *  Returns: list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = NULL;

	if (str == NULL)
		return (NULL);
	new_node = (list_t *)malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

