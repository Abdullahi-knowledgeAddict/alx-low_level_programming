#include "lists.h"

/**
 * add_dnodeint - add a new node at the beginning of a dlistint_t list
 * @head: a pointer to a pointer to the node of the list
 * @n: The data in the new list
 *
 * Return: The address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (*head)
		(*head)->prev = new;
	new->next = *head;
	new->prev = NULL;
	*head = new;
	return (new);
}
