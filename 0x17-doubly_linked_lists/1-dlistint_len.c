#include "lists.h"

/**
 * dlistint_len - counts the number of elements in a doubly linked dlistint_t
 *list
 * @h: The head of the list
 *
 * Return: The number of nodes in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t no_nodes;

	no_nodes = 0;
	if (!h)
		return (no_nodes);
	while (h)/*if h is not NULL*/
	{
		no_nodes++;
		h = h->next;
	}
	return (no_nodes);
}
