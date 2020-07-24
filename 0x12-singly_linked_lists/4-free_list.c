#include "lists.h"

/**
 *free_list - frees a list_t list.
 *@head: head linked list.
 *Return: no return.
 */

void free_list(list_t *head)
{
	list_t *actual;

	while ((actual = head) != NULL)
	{
		head = head->next;
		free(actual->str);
		free(actual);
	}
}
