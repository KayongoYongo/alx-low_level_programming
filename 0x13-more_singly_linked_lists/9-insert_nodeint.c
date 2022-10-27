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
	listint_t *tempC, *tempT, *new;
	unsigned int count, i = 0;

	if (*head == NULL)
		return (NULL);

	tempC = *head;
	while (tempC != NULL)
	{
		count++;
		tempC = tempC->next;
	}

	if (idx > count)
	{
		return (NULL);
	}
	else
	{
		tempT = *head;
		while (i < idx)
		{
			tempT = tempT->next;
			i++;
		}
		new = malloc(sizeof(listint_t));

		if (new == NULL)
			return (NULL);

		new->n = n;
		new->next = tempT->next;
		tempT->next = new;
	}
	return (new);
}
