#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/**
 * FILE: function_pointers.h
 * Desc: An header file which includes all prototypes for the functions.
 * Auth: Ayokunle Ajisafe
 */

#include <stdlib.h>

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif
