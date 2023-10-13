#include "lists.h"

/**
 * free_dlistint - free a lists
 * @head: head of a list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
