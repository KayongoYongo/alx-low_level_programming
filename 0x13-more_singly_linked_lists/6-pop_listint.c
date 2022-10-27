#include "lists.h"
#include <stdlib.h>

/**
 *pop_listint - Frees a list_t list.
 *@head: A pointer to the list_t list.
 *
 * Return: The head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int ret;

	if (*head == NULL)
		return (0);

	temp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (ret);
}

