#include "lists.h"

/**
 * find_listint_loop - Finds the loop contained in a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: If there is no loop - NULL.
 * Otherwise - the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *snail, *bird;

	if (head == NULL || head->next == NULL)
		return (NULL);

	snail = head->next;
	bird = (head->next)->next;

	while (bird)
	{
		if (snail == bird)
		{
			snail = head;

			while (snail != bird)
			{
				snail = snail->next;
				bird = bird->next;
			}

			return (snail);
		}

		snail = snail->next;
		bird = (bird->next)->next;
	}

	return (NULL);
}
