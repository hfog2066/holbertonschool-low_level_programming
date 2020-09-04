#include "lists.h"

/**
 *sum_dlistint - returns the sum of all the data (n)
 *of a dlistint_t linked list.
 *
 *@head: head lists.
 *Return: sum of data.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}

	return (sum);
}
