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
/*A function that deletes the head node*/
int pop_listint(listint_t **head);
/*A function that returns the sum of all the data in a linked list*/
int sum_listint(listint_t *head);
/*A function that inserts a new node at a given position*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
/*Returns the nth node of a linked list*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
/*Deletes node at index*/
int delete_nodeint_at_index(listint_t **head, unsigned int index);
/*A function that reverses a list*/
listint_t *reverse_listint(listint_t **head);
#endif /* LISTS_H */
