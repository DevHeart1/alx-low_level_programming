#include "lists.h"

/**
 * get_nodeint_at_index - This returns the node at a certain index in a list
 * @head: This represents the first node in the linked list
 * @index: This is the index of the node to return
 *
 * Return: the nth node of a listint_t linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int g = 0;
	listint_t *temp1 = head;

	while (temp1 && g < index)
	{
		temp1 = temp1->next;
		g++;
	}

	return (temp1 ? temp1 : NULL);
}

