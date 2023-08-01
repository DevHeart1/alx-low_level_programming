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
	listint_t *new_node;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (g = 0; temp && g < idx; g++)
	{
		if (g == idx - 1)
		{
			new_node->next = temp->next;
			temp->next = new_node;
			return (new_node);
		}
		else
			temp = temp->next;
	}

	return (NULL);

}

