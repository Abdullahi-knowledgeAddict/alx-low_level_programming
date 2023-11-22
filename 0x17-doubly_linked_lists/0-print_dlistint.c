#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistin list
 * @h: Probably the list head or anypart of the list
 *
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t no_nodes;

	no_nodes = 0;
	if (!h)
		return (no_nodes);

	while (h)/*if h is not NULL*/
	{
		printf("%d\n", h->n);
		no_nodes++;
		h = h->next;
	}
	return (no_nodes);
}
