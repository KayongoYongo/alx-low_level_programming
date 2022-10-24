#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
 *add_node- This function ads a node at the beginning
 *
 *@head: The beginning of the node
 *@str: The string to put through
 *
 *Return: The address of the new node.
 */

list_t *add_node(list_t **head, const char *str)
{
	char *duplicate;
	list_t *new;
	int len;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	duplicate = strdup(str);

	if (duplicate == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = duplicate;
	new->len = len;
	new->next = *head;

	*head = new;
	return (new);
}
