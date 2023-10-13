#include "lists.h"

/**
 * insert_dnodeint_at_index - inset node at a given position
 * @h: head
 * @idx: index
 * @n: number to insert
 *
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *current;
	unsigned int i;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;
	temp->prev = NULL;

	if (h == NULL)
		return (NULL);

	current = *h;
	if (idx == 0)
	{
		if (current != NULL)
		{
			temp->next = current;
			current->prev = temp;
		}
		*h = temp;
		return (temp);
	}
	for (i = 0; i < idx - 1 && current != NULL; i++)
		current = current->next;
	if (current == NULL && i < idx - 1)
	{
		free(temp);
		return (NULL);
	}
	temp->next = current->next;
	temp->prev = current;
	if (current->next != NULL)
		current->next->prev = temp;
	current->next = temp;
	return (temp);
}
