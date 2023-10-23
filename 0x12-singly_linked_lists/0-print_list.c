#include "lists.h"
#include <stdio.h>

/**
 * print_list - A function that prints all the elements of a list_t list.
 * @h: The name of the list.
 *
 * Return: The number of nodes.
 */
size_t print_list(const list_t *h)
{
	/*Implementation of the print_list function*/
	size_t node_counter = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		node_counter++;
		h = h->next;
	}

	return (node_counter);
}
