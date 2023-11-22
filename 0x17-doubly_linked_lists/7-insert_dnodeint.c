#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: Pointer to a Pointer to Head(node) of a linked list
 * @n: The data to be stored in the new node
 * @idx: The index /position where the element will be inserted in the list
 *starting from 0
 *
 * Return: The address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *copy, *prev;/*prev is there for an edge case reason*/
	size_t idx_count;

	new = NULL;
	idx_count = 0;
	prev = copy = *h;/*prev assigned for case: idx = 0*/
	new = malloc(sizeof(dlistint_t));
	if (new && !copy)
	{
		*h = new;
		new->next = NULL;
		new->prev = NULL;
		new->n = n;
		return (new);
	}
	while (copy && idx_count !=  idx)
	{
		prev = copy;/*if at all copy becomes NULL, prev won't*/
		copy = copy->next;
		idx_count++;
	}
	if (idx_count == idx)
	{
		if (new)/*if new is not  NULL*/
		{
			new->n = n; /*storing data*/
			new->next = prev->next;
			if (prev->next)/*make formal occupant -> new*/
				prev->next->prev = new;
			prev->next = new;
			new->prev = prev;
		}
	}
	return (new);
}
