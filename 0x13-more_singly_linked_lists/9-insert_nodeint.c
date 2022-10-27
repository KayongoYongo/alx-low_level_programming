#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 *insert_nodeint_at_index- A function that inserts the nodes at n.
 *
 *@head: The head pointer.
 *@idx: The index of the new node
 *@n: the value of the data type
 *
 *Return: The address of the new node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new;
	unsigned int count, i = 1;

	if (*head == NULL)
		return (NULL);

	temp = *head;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}

	if (idx == 0)
	{
		new = malloc(sizeof(listint_t));
		new->next = temp;
		*head = new;
		return (new);
	}

	if (idx > count)
	{
		return (NULL);
	}
	else
	{
		temp = *head;
		while (i < idx)
		{
			temp = temp->next;
			i++;
		}
		new = malloc(sizeof(listint_t));

		if (new == NULL)
			return (NULL);

		new->n = n;
		new->next = temp->next;
		temp->next = new;
	}
	return (new);
}
