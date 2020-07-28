#include "lists.h"

/**
 *pop_listint - deletes the head node of a listint_t linked list.
 *@head: head list.
 *Return: return the head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	int anode;
	listint_t *h;
	listint_t *actual;

	if (*head == NULL)
		return (0);

	actual = *head;

	anode = actual->n;

	h = actual->next;

	free(actual);

	*head = h;

	return (anode);
}
