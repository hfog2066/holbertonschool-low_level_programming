#include "lists.h"

/**
 *add_node_end - adds a new node at the end of a list_t list.
 *@head: head linked list.
 *@str: string store list.
 *Return: address head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp;
	size_t xchar;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (xchar = 0; str[xchar]; xchar++)
		;

	new->len = xchar;
	new->next = NULL;
	tmp = *head;

	if (tmp == NULL)
	{
		*head = new;
	}
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}
	return (*head);
}
