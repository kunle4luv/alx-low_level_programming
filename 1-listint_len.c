#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * listint_len - the number of elements in a linked listint_t list.
 * @h:the head pointer
 *
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
	h = h->next;
		count++;
	}
	return (count);
}
