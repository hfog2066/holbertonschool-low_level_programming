#include "lists.h"

/**
 *free_listint2 - frees a listint_t list.
 *@head: head list.
 *Return: no return.
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *actual;

	if (head != NULL)
	{
		actual = *head;
		while ((temp = actual) != NULL)
		{
			actual = actual->next;
			free(temp);
		}
		*head = NULL;
	}
}
