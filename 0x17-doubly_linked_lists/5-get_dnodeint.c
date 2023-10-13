#include "lists.h"

/**
 * get_dnodeint_at_index - get the nth node of a linkedlist
 * @head: head
 * @index: index
 *
 * Return: NULL if node does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head);

		head = head->next;
		i += 1;
	}

	return (NULL);
}
