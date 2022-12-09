#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 *print_dlistint-A function that prints all the elements of a list
 *
 *@h: The element to be printed
 *
 *Return: The number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;
	
	while(h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
	
