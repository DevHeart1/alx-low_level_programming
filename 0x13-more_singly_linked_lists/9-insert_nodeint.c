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
	unsigned int g;
	listint_t *ptrr, *new_node;

	if (head == NULL)
		return (NULL);

	if (idx != 0)
	{
		ptrr = *head;
		for (g = 0; g < idx - 1 && ptrr != NULL; g++)
			ptrr = ptrr->next;
		if (ptrr == NULL)
			return (NULL);
	}

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	new_node->next = ptrr->next;
	ptrr->next = new_node;
	return (new_node);
}
}
