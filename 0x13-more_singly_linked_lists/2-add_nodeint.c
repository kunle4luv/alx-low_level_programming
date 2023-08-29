#include <stdlib.h>
#include "lists.h"

/**
  * add_nodeint - A dunction that add node
  * at beginning of a listint_t list.
  * @head: head of double pointer
  * @n: int add list.
  *
  * Return: NULL if it failed
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nnd;

	if (head == NULL)
		return (NULL);
	nnd = malloc(sizeof(listint_t));
	if (nnd == NULL)
		return (NULL);
	nnd->n = n;
	nnd->next = *head;
	*head = nnd;
	return (nnd);
}
