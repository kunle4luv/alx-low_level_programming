#include "lists.h"

/**
 * get_dnodeint_at_index - Afunction that returns the nth node
 * of a dlistint_t linked list
 * @head: pointer to the list.
 * @index: index of the node to return
 *
 * Return: If the node does not exist return NULL. Otherwise , the address of the node.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);

	while (head && i < index)
	{
		head = head->next;
		i++;
	}

	return (head ? head : NULL);
}
