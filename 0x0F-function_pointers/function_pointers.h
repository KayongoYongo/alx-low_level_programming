#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stddef.h>

/*A function that prints a name*/
void print_name(char *name, void (*f)(char *));
/*A function that executes a function given as a parameter on each element of an array*/
void array_iterator(int *array, size_t size, void (*action)(int));
/*A function that searches for an integer*/
int int_index(int *array, int size, int (*cmp)(int));
#endif
