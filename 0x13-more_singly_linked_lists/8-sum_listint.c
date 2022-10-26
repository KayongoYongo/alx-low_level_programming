#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 *sum_listint-A function that adds the node at the end.
 *
 *@head: The beginning of the linked list
 *
 *Return: The sum of the nodes.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	else
	{
		while (head != NULL)
		{
			sum = sum + head->n;
			head = head->next;
		}
	}
	return (sum);
}

