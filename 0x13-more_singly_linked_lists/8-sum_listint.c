#include "lists.h"

/**
 *sum_listint - returns the sum of all the data (n) of a listint_t linked list.
 *@head: head list.
 *Return: sum all data.
 */

int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
