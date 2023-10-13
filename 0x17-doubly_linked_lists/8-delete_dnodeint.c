#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at given position
 * @head: head
 * @index: index
 *
 * Return: 1 if it succeeded, 0 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *previous;
	unsigned int i;

	current = *head;
	previous = *head;

	if (*head == NULL || head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		if (current->next != NULL)
			current->next->prev = NULL;
		free(current);
		return (1);
	}
	else
	{
		for (i = 0; i < index - 1 && previous != NULL; i++)
			previous = previous->next;
		if (previous == NULL || previous->next == NULL)
			return (-1);

		current = previous->next;
		previous->next = current->next;
		if (current->next != NULL)
			current->next->prev = previous;
		free(current);
		return (1);
	}

}
