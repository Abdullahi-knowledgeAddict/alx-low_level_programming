#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t
 * @head: The pointer to the pointer that holds the address of the list head
 * @n: The data to be stored in the new node
 *
 * Return: The address of the new element or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *copy;

	copy = *head;
	new = malloc(sizeof(dlistint_t));
	if (!new)/*If malloc fails*/
		return (NULL);
	new->n = n; /*Storing data*/
	if (!copy)
	{
		*head = new;
		new->next = copy;/*since copy is NULL*/
		new->prev = copy;
	}
	else
	{
		while (copy->next)/*Iterating till last node*/
			copy = copy->next;
		new->next = copy->next; /*Assigning NULL value*/
		copy->next = new;
		new->prev = copy;
	}
	return (new);
}
