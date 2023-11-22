#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t
 * @head: The head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *copy;

	while (head)
	{
		copy = head;
		head = head->next;
		free(copy);
	}
}
