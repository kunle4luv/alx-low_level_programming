#include "lists.h"

/**
 * list_len - A function that finds the number of elements
 * in a linked list_t list.
 * @h: The linked list_t list
 * Return: number of element in h.
 */
size_t list_len(constlist_t *h)
{
	size_t element = 0;

	while (h)
	{
		element++;
		h = h->next;
	}
	return (element);
}
