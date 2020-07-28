#include "lists.h"

/**
 *listint_len - returns the number of elements in a linked listint_t list.
 *@h: list head.
 *Return: number of nodes.
 */

size_t listint_len(const listint_t *h)
{
	size_t anodes = 0;

	while (h != NULL)
	{
		h = h->next;
		anodes++;
	}
	return (anodes);
}
