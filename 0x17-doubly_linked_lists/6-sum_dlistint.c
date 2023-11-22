#include "lists.h"

/**
 * sum_dlistint - sum all the data (n) of a dlistint_t linked list
 * @head: The head of the list
 *
 * Return: The total sum of the list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
