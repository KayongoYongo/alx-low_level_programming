#include "lists.h"
/**
 * add_dnodeint - add a node at the beginning of a list
 * @head: head of the list
 * @n: node to be added
 * Return: address of the new node or NULL on failure
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	(*head)->prev = new;
	new->next = *head;
	*head = new;

	return (new);
}
