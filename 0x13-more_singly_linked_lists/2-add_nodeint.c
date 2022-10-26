#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 *add_nodeint-- This function ads a node at the beginning
 *
 *@head: The beginning of the node
 *@n: The string to put through
 *
 *Return: The address of the new node.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	
	new->next = *head;
	*head = new;

	return (new);
}
