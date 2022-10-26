#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/*A function that prints all elements of a list*/
size_t print_listint(const listint_t *h);
/*A function that return the number of elements in a linked list*/
size_t listint_len(const listint_t *h);
/*A function that adds a new node at the beginning of a list*/
listint_t *add_nodeint(listint_t **head, const int n);
/*A function that adds a node at the end of a list*/
listint_t *add_nodeint_end(listint_t **head, const int n);
/*A function that frees a list*/
void free_listint(listint_t *head);
/*A function that frees a list*/
void free_listint2(listint_t **head);
/*A function that returns the sum of all the data in a linked list*/
int sum_listint(listint_t *head);
#endif /* LISTS_H */
