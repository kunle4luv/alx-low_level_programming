#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/* The structure of a linked list node is defined
 *
 * struct list_t - singly linked list
 * @str: The string - (malloc'ed string)
 * @len: The length of the string
 * @next: The points to the next node
 * Description: singly linked list node structure
 */
typedef struct list_t {
	char *str;
	struct list_t *next;
} list_t;

/* prototypes */
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif /* LISTS_H*/
