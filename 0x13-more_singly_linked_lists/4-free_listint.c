#include "lists.h"

/**
 *free_listint - frees a listint_t list.
 *@head: head list.
 *Return: no return.
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
