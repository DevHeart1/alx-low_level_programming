#include "lists.h"

/**
 * insert_nodeint_at_index - This function inserts a new node in a linked list,
 * at a given position
 * @head: This represents a pointer to the first node
 * @idx: This represents index where the new node is added
 * @n: This represents the data to insert in the new node
 *
 * Return: The address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *ptr, *new;

	if (head == NULL)
		return (NULL);

	if (idx != 0)
	{
		ptr = *head;
		for (i = 0; i < idx - 1 && ptr != NULL; i++)
			ptr = ptr->next;
		if (ptr == NULL)
			return (NULL);
	}

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	new->next = ptr->next;
	ptr->next = new;
	return (new);
}
