#include "lists.h"

/**
 * get_dnodeint_at_index - gets the node at a given index
 * @head: The head of the linked list
 * @index: The Rank of the node from the head starting at 0
 *
 * Return: The Address of the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t pres_idx;

	pres_idx = 0;
	while (head)
	{
		if (index == pres_idx)
			return (head);
		head = head->next;
		pres_idx++;
	}
	return (head);
}
