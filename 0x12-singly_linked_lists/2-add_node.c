#include "lists.h"

/**
 * add_node - adds a new node at the
 *beginning of a list_t list.
 *@head: head of linked list.
 *@str: string to store list.
 *Return: address of head.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t xchar;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (xchar = 0; str[xchar]; xchar++)
		;

	new->len = xchar;
	new->next = *head;
	*head = new;

	return (*head);
}
