#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>


/**
 * struct list_s - The structure for a linked list
 * @s: The malloc'ed string
 * @len: The lenght of the string
 * @next: The points to the next node
 */
typedef struct list_s
{
	char *s;
	struct list_s *next;
	unsigned int len;
}list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
int _putchar(char c);

#endif/*List.h Header file*/
