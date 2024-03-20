#include "lists.h"

/**
 * free_dlistint - A function that frees a dlistint_t list
 * @head: The pointer to the head 
 *
 * Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *new_dlist

	while (head)
	{
		new_dlist = head->next;
		free(head);
		head = new_dlist;
	}
}
