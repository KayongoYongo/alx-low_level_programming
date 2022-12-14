#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

/*A function that prints all elements of a list*/
size_t print_dlistint(const dlistint_t *h);
/*A function that  returns the number of nodes*/
size_t dlistint_len(const dlistint_t *h);
/*A function that adds a new node at the beginning of a linked list*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
/*A function that inserts a node at the end*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
/*A function that frees a list*/
void free_dlistint(dlistint_t *head);
/*A function that returns the nth node of a linked list*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
/*A function that finds sum of elements*/
int sum_dlistint(dlistint_t *head);
/*A function that inserts a node at a given posiion*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
/*A function that deletes a node*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
#endif /* LISTS_H */
